class Solution
{
    int solve(Node* root){
        if(!root) return 0;
        if(root->left==NULL && root->right==NULL) return root->data;

        int lsum = solve(root->left);
        int rsum = solve(root->right);

        if(root->data == lsum+rsum && lsum>=0 && rsum>=0)
        return root->data+lsum+rsum;
        else
        return -1;

    }
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         if(solve(root)>0)
         return 1;
         else
         return 0;
    }
};
