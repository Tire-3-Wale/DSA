#include <iostream>
using namespace std;

int Firstocc(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int Lastocc(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{
    int even[11] = {1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "The first occ. of key is at index " << Firstocc(even, 11, 3)<<endl;
    cout << "The Last occ. of key is at index " << Lastocc(even, 11, 3)<<endl;
    return 0;
}