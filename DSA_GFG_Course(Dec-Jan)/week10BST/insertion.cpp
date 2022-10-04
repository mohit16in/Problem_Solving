// INSERT DATA INTO BST
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public: 
        int data;
        Node* left;
        Node* right;
        Node(int data)
        {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* insertIntoBST(Node* root, int data)
{
    if(root==NULL)
    {
        root = new Node(data);
        return root;
    }
    if(root->data > data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {   
            // purana level khtm ho gya h
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void takeInput(Node* &root)
{
    int d;
    cin >> d;
    
    while(d!=-1)
    {
        root = insertIntoBST(root, d);
        cin >> d;
    }
}

int main ()
{
    Node* root = NULL;
    
    cout << "Enter data to insert it into BST " << endl;
    takeInput(root);

    cout << "Displaying the data" << endl;
    levelOrderTraversal(root);
}