#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    // cout << num << endl;

    // Address of operator ---> &
    // address hamesha hexadecimal format mai hota hai
    cout << "Address of num is --> " << &num << endl;

    int *p = &num;
    cout << p << endl;

    // Copying one pointer into another.
    int *q = p;
    cout << *q << " - " << *p << endl;
    cout << q << " - " << p << endl;

    return 0;
}


/*
Bhaaisaab Aaj kaa din kaafi productive gyaa

*/ 

