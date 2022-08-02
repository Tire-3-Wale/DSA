#include <iostream>
#include <climits>

using namespace std;
/*
Pre defined Functions in array for maximum
int maxi=INT_min;
maxi=max(maxi,num[i]);
This is applicable for minimum value too.....
*/
int GetMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int GetMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int num[100];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "The maximum value in this array is " << GetMax(num, size) << endl;
    cout << "The minimum value in this array is " << GetMin(num, size) << endl;

    return 0;
}