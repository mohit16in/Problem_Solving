#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int data)
        {
            this->data = data;
            left =  NULL;
            right = NULL;
        }
};


//Build Tree using recursion 
TreeNode* buildTree(TreeNode* root)
{
    cout << "Enter the data :  " << endl;
    int data;
    cin >> data;
    root = new TreeNode(data);

    if(data==-1)
    {
        return NULL;
    }

    cout << "Enter the value for inserting in the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the value for inserting in the right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}


//Level-order-Traversal     (Binary Tree)
void BFS(TreeNode* root)
{
    queue<TreeNode*> q;
    if(root==NULL)
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())   
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp -> right)
            {
                q.push(temp->right);
            }
        }
    }
}


//Build Tree using BFS
void build_using_level_order(TreeNode* &root)
{
    queue<TreeNode*> q;
    cout << "Enter the data for node " << endl;
    int root_data;
    cin >> root_data;
    if(root_data == -1)
    {
        return;
    }
    root = new TreeNode(root_data);
    q.push(root);

    while(!q.empty())
    {
        TreeNode* temp = q.front();
        q.pop();
        
        cout << "Enter the value to insert in left of : " << temp->data << endl;
        int left_data;
        cin >> left_data;
        if(left_data != -1)
        {
            temp->left = new TreeNode(left_data);
            q.push(temp->left);
        }

        cout << "Enter the value to insert in right of : " << temp->data << endl;
        int right_data;
        cin >> right_data;
        if(right_data != -1)
        {
            temp->right = new TreeNode(right_data);
            q.push(temp->right);
        }
    }
}

int main ()
{
    TreeNode* root = NULL;

    // root = buildTree(root);
    build_using_level_order(root);
    BFS(root);
}