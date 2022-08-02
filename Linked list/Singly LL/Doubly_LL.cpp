#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
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
        cout << "Memory is free for node with data " << value << endl;
    }
};

// Print
void Print(Node *Head)
{

    Node *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// function to get the length of the LL
int GetLen(Node *Head)
{

    Node *temp = Head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// For inserting a new node at head
void InsertAtHead(Node *&tail, Node *&Head, int d)
{
    // Agar pehle se koi node na pada ho to
    if (Head == NULL)
    {
        Node *temp = new Node(d);
        Head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = Head;
        Head->prev = temp;
        Head = temp;
    }
}

// for inserting a node at tail
void InsertAtTail(Node *&tail, Node *&Head, int d)
{
    if (Head == NULL)
    {
        Node *temp = new Node(d);
        Head = temp;
        tail = temp;
    }
    else
    {

        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// kissi bhee position pe insert karne ke liyee
void InsertAtPosition(Node *&tail, Node *&head, int p, int d)
{
    // Agar 1st place pe node add karna hoo to
    if (p == 1)
    {
        InsertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < p - 1)
    {
        temp = temp->next;
        count++;
    }

    // Agar humm last place pe add kar rahe hai node
    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;
}

// For Deleting a  node
void DeleteNode(int p, Node *&Head)
{
    // deleting first or start node
    if (p == 1)
    {
        // moving head 1 node ahead and freeing the memory of previous node
        Node *temp = Head;
        temp->next->prev = NULL;
        Head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle or last node
        Node *current = Head;
        Node *prev = NULL;
        int count = 1;
        while (count < p)
        {
            prev = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        prev->next = current->next;
        current ->next = NULL;
        delete current;
    }
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    InsertAtHead(tail, head, 11);
    InsertAtHead(tail, head, 13);
    InsertAtHead(tail, head, 8);
    InsertAtTail(tail, head, 25);
    InsertAtPosition(tail, head, 2, 100);
    InsertAtPosition(tail, head, 1, 101);
    InsertAtPosition(tail, head, 8, 102);
    Print(head);

    cout << "Head :-" << head->data << endl;
    cout << "Tail :-" << tail->data << endl;
    cout << "Size:- " << GetLen(head) << endl;

    return 0;
}