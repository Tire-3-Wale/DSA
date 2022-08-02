#include <iostream>
using namespace std;

int GetSum(int *arr, int n)
{
    cout << "tHE SIZE OF THIS ARRAY IS:-" << sizeof(arr) << endl; //This shows that array is passed as a pointer.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout << GetSum(arr, 10) << endl;
    ;

    return 0;
}