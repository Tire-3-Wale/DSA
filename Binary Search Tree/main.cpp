#include <iostream>
#include <queue>
using namespace std;


class Node
{
public:
    // data inside a node
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *insertBST(Node *&root, int data)
{

    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        // right part mai insert karna hai
        root->right = insertBST(root->right, data);
    }
    else
    {
        root->left = insertBST(root->left, data);
    }
    return root;
}


Node *levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        // case where it is a New level
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
            cout << temp->data << " ";
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


void inOrderTravarsal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrderTravarsal(root->left);
    cout << root->data << " ";
    inOrderTravarsal(root->right);
}


void preOrderTravarsal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTravarsal(root->left);
    preOrderTravarsal(root->right);
}


void postOrderTravarsal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    postOrderTravarsal(root->left);
    postOrderTravarsal(root->right);
    cout << root->data << " ";
}


void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertBST(root, data);
        cin >> data;
    }
}


Node *minValue(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}


Node *maxValue(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}


Node *nodeToDelete(Node* root , int val){
    // Base case
    if(root == NULL){
        return root;
    }
    //2nd base case-> jab aapko data mil jayee jo delet karn athaa
    if(root -> data == val){
        // 0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 child -> isme 2 case banenge 

        //left child hai
        if(root -> left != NULL && root -> right == NULL){
            Node *temp = root -> left;
            delete root ;
            return temp;
        }
        //right child hai 
        if(root -> left == NULL && root -> right != NULL){
            Node *temp = root -> right;
            delete root ;
            return temp;
        }      

        // 2 child
        if(root -> left != NULL && root -> right != NULL){
            int mini = minValue( root -> right)->data;  
            root -> data = mini;      
            root -> right = nodeToDelete(root -> right , mini);
            return root;
        }
    }
    else if(root -> data > val){
        root -> left = nodeToDelete( root -> left , val);
        return root;
    }
    else{//(Agar root -> data < val se)
        root -> right = nodeToDelete(root -> right , val);
        return root;
    }
}


int main()
{
    Node *root = NULL;
    cout << "Enter data for creating a BST" << endl;

    takeInput(root);

    // input string -> 20 12 18 19 25 30 -1
    levelOrderTraversal(root);

    // Printing in order
    cout << "In order is " << endl;
    inOrderTravarsal(root);
    cout << endl
         << "Pre order is " << endl;
    preOrderTravarsal(root);
    cout << endl
         << "Post order is " << endl;
    postOrderTravarsal(root);

    //Printing the minimum and maximum valur of the BST
    cout << endl
         << "The minimum value is " << minValue(root)->data << endl;
    cout << "The Maimum value is " << maxValue(root)->data << endl;

    return 0;
}