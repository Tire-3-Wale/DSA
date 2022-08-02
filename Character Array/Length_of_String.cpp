#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
    return 0;
}