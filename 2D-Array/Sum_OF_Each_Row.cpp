#include <iostream>
using namespace std;
// ROW WISE SUM
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
// COLUMN WISE SUM
void colOfArr(int arr[][3], int n, int m)
{
    cout << "Column wise sum:- " << endl;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << "the sum of " << j + 1 << " row is " << sum << endl;
    }
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
    SumOfArr(arr, 3, 3);
    colOfArr(arr, 3, 3);
    return 0;
}