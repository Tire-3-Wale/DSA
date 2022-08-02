#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int *arr, int n)
{
    // Base Casae if already Sorted.
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursive call
    BubbleSort(arr, n - 1);
}
int main()
{
    int arr[5] = {9, 11, 133, 418, 17};
    int n = 5;
    BubbleSort(arr, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}