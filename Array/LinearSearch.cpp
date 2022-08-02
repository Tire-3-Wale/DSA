#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {10, 16, 7, -4, 0};
    cout << "Enter the Element to search for"<<endl;
    int key;
    cin >> key;

    bool found = Search(arr, 5, key);
    if (found)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is absent" << endl;
    }
    return 0;
}