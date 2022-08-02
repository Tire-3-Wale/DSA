#include <iostream>
using namespace std;

int main()
{
    // Implementation of pointers in character array.
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[8] = "Shivang";

    cout << arr << endl;
    cout << ch << endl;
    // Cout ki implementation int ke case mai aalag hai or char ke case mai aalag
    // Yaha pee int mai address print hoo raha hai or chaR TYPE mai uska entire content print hoo raha hai

    char *c = &ch[0];

    char te = 't';
    char *p = &te;
    cout << p << endl;

    return 0;
}