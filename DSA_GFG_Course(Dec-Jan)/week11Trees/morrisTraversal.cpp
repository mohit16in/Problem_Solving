//MORRIS TRAVERSAL
Node* find(Node* root)
{
    Node* pred = root->left;
    while(pred->right && pred->right!=root)
        pred = pred->right;
    return pred;
}
vector<int> inOrder(Node* root)
{
    vector<int> v;
    while(root)
    {
        if(root->left==NULL)
        {
            v.push_back(root->data);
            root = root->right;
        }
        else
        {
            Node* predecessor = find(root);
            if(predecessor->right==NULL)
            {
                predecessor->right = root;
                root = root->left;
            }
            else
            {
                predecessor->right = NULL;
                v.push_back(root->data);
                root = root->right;
            }
        }
    }
    return v;
}