#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of A: " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of B: " << endl;
    cin >> b;

    char op;
    cout << "Enter an operation: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The value of A+B is: " << a + b << endl;
        break;

    case '-':
        cout << "The value of A-B is: " << a - b << endl;
        break;

    case '*':
        cout << "The value of A*B is: " << a * b << endl;
        break;

    case '/':
        cout << "The value of A/B is: " << a / b << endl;
        break;
    default:

        cout << "Unknown Operation" << endl;
        break;
    }
    return 0;
}