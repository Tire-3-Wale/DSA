#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Reversal(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}

int GetSize(char arr[])
{
    int count = 0;
    int i = 0;
    while (arr[i] != 0)
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char arr[20];
    // Taking input of name and printing it
    cout << "Enter your name " << endl;
    cin >> arr;
    cout << "Your name is: " << arr << endl;
    // Printing the size of name.
    int len = GetSize(arr);
    cout << "Size-> " << len << endl;
    // printing reversed name.
    Reversal(arr, len);
    cout << "Your name is: " << arr << endl;
    return 0;
}