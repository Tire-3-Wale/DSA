#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{

    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}
int main()
{
    int first[10] = {5, 6, 7, 8};
    PrintArray(first, 10);
    return 0;
}