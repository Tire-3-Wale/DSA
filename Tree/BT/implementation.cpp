#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data for the node " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for the left node" << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for the right node" << endl;
    root->right = buildTree(root->right);
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " " ;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void InOrder(node*root){
    //base case
    if(root == NULL){
        return;
    }
    InOrder(root ->left);
    cout << root -> data << " ";
    InOrder(root -> right);
}
void PreOrder(node*root){
    //base case
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    PreOrder(root ->left);
    PreOrder(root -> right);
}
void PostOrder(node*root){
    //base case
    if(root == NULL){
        return;
    }
    PostOrder(root ->left);
    PostOrder(root -> right);
    cout << root -> data << " ";
}
int main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    //input string -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    levelOrderTraversal(root);
    PostOrder(root);
    cout << endl;
    PreOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    return 0;
}
// Homework
//reverse level order triversal
// all triversals using iteration

