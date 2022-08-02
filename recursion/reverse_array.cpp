#include <iostream>
using namespace std;

int ulta(int arr[], int i, int j)
{
    if (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
        ulta(arr, i, j);
    }

    return 0;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    ulta(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}