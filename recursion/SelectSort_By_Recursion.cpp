#include <iostream>
using namespace std;

void SelectSort(int *arr, int Begin, int size)
{
    // base case
    if (Begin >= size - 1)
    {
        return;
    }
    int MinIndex = Begin;
    for (int i = Begin; i < size; i++)
    {
        if (arr[i] < arr[MinIndex])
        {
            MinIndex = i;
        }
        swap(arr[MinIndex], arr[Begin]);
    }
    SelectSort(arr, Begin + 1, size);
}
int main()
{
    int arr[6] = {24, 12, 77, 63, 11, 8};
    int size = 6;
    SelectSort(arr, 0, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}