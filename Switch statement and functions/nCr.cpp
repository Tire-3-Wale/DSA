#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    return num / den;
}

int main()
{
    int n;
    int r;
    cout << "Enter the value of N and R: "<<endl;
    cin >> n >> r;
    cout <<"The Answer is :" << nCr(n, r) << endl;
    return 0;
}