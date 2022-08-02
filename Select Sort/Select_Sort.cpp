#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int SelectSorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        
        int MinIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
        }
        swap(arr[MinIndex], arr[i]);
    }
}

int PrintArray(int arr[], int size)
{

    // cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {24, 12, 77, 63, 11, 8};

    cout << "The given array is:- " << endl;
    PrintArray(arr, 6);
    cout << endl;

    SelectSorting(arr, 6);
    cout << "Sorted array is:- ";
    cout << endl;

    PrintArray(arr, 6);
    return 0;
}