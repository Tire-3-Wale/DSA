#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SumOfArr(int arr[][3], int n, int m)
{
    cout << "Row wise sum:- " << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "the sum of " << i + 1 << " row is " << sum << endl;
    }
}

int LargestSum(int arr[][3], int n, int m)
{
    int Index = -1;
    int maxi = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            Index = i+1;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return Index;
}

int main()
{
    int arr[3][3];
    cout << "Enter The Elemens Of The Array" << endl;

    // Taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The sum of each row is:" << endl;

    int Fans = LargestSum(arr, 3, 3);
    cout << "Max sum is of row " << Fans << endl;
    return 0;
}