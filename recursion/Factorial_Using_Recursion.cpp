#include <iostream>
using namespace std;
int fact(int n){
// base Case
if (n == 0){
    return 1;
}
    int chotti = fact(n-1);
    int badi = n * chotti;
    return badi;
}

int main()
{
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    int ans = fact(n);
    cout << ans <<endl;
    return 0;
}