#include <iostream>
using namespace std;
bool BinarySearch(int *arr, int s, int e, int key)
{
    // base case
    // element not found
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s / 2);
    // Element found
    if (arr[mid] == key)
    {
        return true;
    }
    // Recursive call
    if (arr[mid] < key)
    {
        BinarySearch(arr, mid + 1, e, key);
    }
    else
    {

        BinarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {10, 15, 20, 25, 30, 35};
    int size = 6;
    int key = 10;
    int ans = BinarySearch(arr, 0, size - 1, key);
    if (ans)
    {
        cout << "Element is Present" << endl;
    }
    else
    {
        cout << "Element is not Present" << endl;
    }

    return 0;
}