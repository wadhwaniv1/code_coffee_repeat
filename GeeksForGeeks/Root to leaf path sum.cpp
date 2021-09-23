class Solution
{
    bool solve(Node *root, int S, int sum){
        if(!root)
        {
            if(sum == S)
            return true;
            else
            return false;
        }

        bool l = solve(root->left,S,sum+root->data);
        bool r = solve(root->right,S,sum+root->data);

        return l||r;
    }
    public:
    bool hasPathSum(Node *root, int S) {
    // Your code here
    int sum=0;
    if(solve(root,S,sum)){
        return 1;
    }else
    return 0;
    }
};
