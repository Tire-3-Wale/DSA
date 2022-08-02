#include <iostream>
using namespace std;

int Part(int *arr, int s, int e)
{
    int Pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= Pivot)
        {
            count++;
        }
    }
    // Right index
    int PivotIndex = s + count;
    swap(arr[PivotIndex], arr[s]);

    // Left or right wala part sambhal lete hai
    int i = s;
    int j = e;
    while (i < PivotIndex && j > PivotIndex)
    {
        while (arr[i] < Pivot)
        {
            i++;
        }

        while (arr[j] > Pivot)
        {
            j--;
        }
        if (i < PivotIndex && j > PivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return PivotIndex;
}

void QuickSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }

    // Partition karenge
    int p = Part(arr, s, e);
    // Left wala part sort kar lete hai
    QuickSort(arr, s, p - 1);
    // Right wala part sort kar lete hai ab
    QuickSort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {5, 18, 9, 10, 4};
    int n = 5;

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}