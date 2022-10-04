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