#include <iostream>
using namespace std;

bool IsSorted(int *arr, int size)
{
    // Base Case
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool RemainingPart = IsSorted(arr + 1, size - 1);
        return RemainingPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int n = 5;
    bool ans = IsSorted(arr, n);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}