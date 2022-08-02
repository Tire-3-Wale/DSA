#include <iostream>
using namespace std;
// Humee column ka relation row se relate karana hai kissi tarah se
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}