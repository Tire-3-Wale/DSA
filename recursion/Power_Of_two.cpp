#include <iostream>
using namespace std;

int Power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int Small = Power(n - 1);
    int bigger = 2 * Small;
    return bigger;
}

int main()
{
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;

    int ans = Power(n);
    cout << ans << endl;

    return 0;
}