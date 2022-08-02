#include <iostream>
#include <map>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // Destructor
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
// Function for insertion of a node at head in LL
void InsertAtHead(Node *&Head, int d)
{
    // Creating a new node first
    Node *temp = new Node(d);
    // Ab nayee node ke pointer ko null se hata ke head pe point kara doo
    temp->next = Head;
    // head ko uthaa ke nayee node pe point karwa doo
    Head = temp;
}
// FUnction to insert a node at tail in LL


void InsertAtTail(Node *&tail, int d)
{
    // Creating a new node first
    Node *temp = new Node(d);
    // Tail wale node ke next ko temp pe point kara doo
    tail->next = temp;
    // Tail ko uthaa ke temp pe point kara doo
    tail = tail->next;
}


// Function to insert at any position in between
void InsertAtPosition(Node *&head, Node *&tail, int P, int d)
{
    // Ye case jab humee first position pe add karnna hai node
    if (P == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < P - 1)
    {
        temp = temp->next;
        count++;
    }

    // Agar humm last place pe add kar rahe hai node
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}


// Functoin for deleting a node
void DeleteNode(int p, Node *&Head)
{
    // deleting first or start node
    if (p == 1)
    {
        // moving head 1 node ahead and freeing the memory of previous node
        Node *temp = Head;
        Head = Head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any middle or last node
        Node* current = Head;
        Node* prev = NULL;
        int count = 1;
        while (count < p)
        {
            prev = current;
            current = current->next;
            count ++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

// Function to print a linked list
void Print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // Inserting elements at head
    InsertAtTail(tail, 12);
    InsertAtTail(tail, 15);
    Print(head);
    InsertAtPosition(head, tail, 4, 22);

    InsertAtPosition(head, tail, 1, 22);
    Print(head);

    cout << "Head :" << head->data << endl;
    cout << "Tail :" << tail->data << endl;

    DeleteNode(1, head);
    DeleteNode(3, head);
    Print(head);

    return 0;
}