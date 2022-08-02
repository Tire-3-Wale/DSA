#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortarr(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {

        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }
    }
    sort(arr[i],arr[j]);
    i++;
    j--;
}

void Printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[8] = {0, 1, 0, 1, 0, 1, 0, 1};

    sortarr(arr, 8);
    Printarray(arr, 8);

    return 0;
}