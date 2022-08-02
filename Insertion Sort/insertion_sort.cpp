#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{

    for (int i = 1; i < n; ++i)
    {
        int curr = arr[i];
        int idx = i - 1;

        while (idx >= 0 && arr[idx] > curr)
        {
            arr[idx + 1] = arr[idx];
            --idx;
        }

        arr[idx + 1] = curr;
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {45, 2, 6, 7, 12};
    // Printing unsorted array.
    cout << "Unsorted array:- " << endl;
    PrintArray(arr, 5);
    // Sorting and printing array.
    cout << "Sorted array:- " << endl;
    InsertionSort(arr, 5);
    PrintArray(arr, 5);
    return 0;
}