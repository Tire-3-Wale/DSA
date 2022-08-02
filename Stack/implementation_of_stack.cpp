#include <iostream>
using namespace std;

class Stack
{
public:
    // properties
    int *arr;
    int size;
    int top;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // behaviour
    void push(int element)
    {
        // Pehle check karenge ki space hai ke nahi
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {

            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
};

int main()
{
    Stack st(5);
    st.push(5);
    st.push(15);
    st.push(25);
    st.pop();
    cout << st.peek() << endl;
    return 0;
}