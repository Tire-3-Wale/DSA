#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int BS(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {3, 53, 1, 66, 12};
    PrintArray(arr, 5);
    cout<<endl;

    cout<<"Sorted array ";
    BS(arr,5);
    cout<<endl;
    PrintArray(arr,5);
    return 0;
}