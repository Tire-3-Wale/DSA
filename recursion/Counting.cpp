#include <iostream>
using namespace std;

void Print(int n)
{
    if (n == 0)
    {
        return;
    }
    Print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    cout << endl;

    Print(n);
    return 0;
}