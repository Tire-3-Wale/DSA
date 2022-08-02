#include <iostream>
using namespace std;

int binarry(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    /*
    mid ka Formula 
    start+ (End-Start)/2
    q kii uski value add karke range ke bahar jaa sakti hai
    */ 

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int odd[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int evenIndex = binarry(even, 10, 9);
    cout << evenIndex << " is the index for the required element" << endl;
    int oddIndex = binarry(odd, 9, 1);
    cout << oddIndex << " is the index for the required element" << endl;

    return 0;
}