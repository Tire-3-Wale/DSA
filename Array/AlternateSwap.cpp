#include <iostream>
using namespace std;

void Swaparr(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void Printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()  
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {1, 2, 3, 4, 5};

    Swaparr(arr, 6);
    Swaparr(brr, 5);

    Printarray(arr, 6);
    Printarray(brr, 5);
    return 0;
}