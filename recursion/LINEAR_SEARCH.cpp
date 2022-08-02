#include <iostream>
using namespace std;
bool search(int *arr, int size, int key)
{
    // Base Case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else{
    return search(arr +1 , size -1 , key);
    }
}
int main()
{
    int arr[6] = {10, 15, 20, 25, 30, 35};
    int s = 5;
    int key = 10;
    int ans = search(arr, s, key);
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