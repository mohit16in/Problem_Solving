

//HEIGHT OF A TREE
class Solution{
    public:
    void rec(struct Node* root, int &cnt, int &mx_cnt)
    {
        if(root==NULL)
        {
            return;
        }
        cnt++;
        mx_cnt = max(mx_cnt, cnt);
        rec(root->left, cnt, mx_cnt);
        rec(root->right, cnt, mx_cnt);
        cnt--;
        return;
	}
    int height(struct Node* node)
    {
        // code here 
        int count = 0, mx_count = 0;
        rec(node, count, mx_count);
        return mx_count;
    }
};




class Solution{
    public:
    int rec(struct Node* root)
    {
    	if(root == NULL)
    	{
    		return 0;
    	}

    	int left_height = rec(root->left);
    	int right_height = rec(root->right);

    	if(left_height > right_height)
    		return left_height+1;
    	else
    		return right_height+1;
	}
    int height(struct Node* node)
    {
        // code here 
        int height = rec(node, count, mx_count);
        return height;
    }
};
