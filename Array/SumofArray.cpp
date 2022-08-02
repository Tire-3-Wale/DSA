#include <iostream>
using namespace std;
int Getdata(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
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
    cout<<"The sum Of Array is "<<Getdata(num,size)<<endl;
    return 0;
}