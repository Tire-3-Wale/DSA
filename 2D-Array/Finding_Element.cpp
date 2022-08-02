#include <iostream>
using namespace std;

bool IsPresent(int arr[][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
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
    // printng the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the to check it's presence" << endl;
    int Target;
    cin >> Target;

    if (IsPresent(arr, Target, 3, 3))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element not present" << endl;
    }
    return 0;
}