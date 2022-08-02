#include <iostream>
using namespace std;

void SayNumber(int n, string arr[])
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Processing
    int digit = n % 10;
    n = n / 10;
    SayNumber(n,arr);
    cout << arr[digit] << " " << endl;
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the value of N:" << endl;
    cin >> n;
    cout << endl;
    SayNumber(n, arr);
    return 0;
}