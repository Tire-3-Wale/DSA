#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
        int ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char( ch )<<" ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 1;
}