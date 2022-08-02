#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;
    s.push(3);
    s.push(32);
    s.push(12);
    s.push(2);

    s.pop();
    cout << s.top() << endl;
    return 0;
}