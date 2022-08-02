#include <iostream>
#include <stack>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free larwa rahe hai iss code ke dwara
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }
    // Functions
    int push(int data);
    void pop();
    int top();
};

int Stack ::push(int data)
{
    // Creating a node
    Node *temp;
    temp = new Node(data);
    // setting data to it
    temp->data = data;
    // Adding the node to the list
    if (head == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = head;
    }
    head = temp;
}
void Stack::pop()
{
    // Checking if the stack is empty or not
    if (head == NULL)
    {
        cout << "Stack UnderFlow" << endl;
    }
    // Deleting the Node;
    else
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
    }
}
int Stack :: top()
{
    if(head == NULL){
        cout <<"Stack is Empty: error code ";
        return -1;
    }
    int ans = head->data;
    return ans;
}
int main()
{
    Stack st;
    // st.push(5);
    // st.push(15);
    // st.push(25);
    // st.pop();
    cout << st.top() << endl;
    return 0;
}