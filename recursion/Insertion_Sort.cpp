#include <iostream>
using namespace std;

void InsertionSort(int *arr, int n)
{
    if (n <= 1)
    {
        return ;
    }
    InsertionSort(arr , n-1);
}

int main()
{
    int arr[6] = {24, 12, 77, 63, 11, 8};
    int size = 6;
    InsertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}