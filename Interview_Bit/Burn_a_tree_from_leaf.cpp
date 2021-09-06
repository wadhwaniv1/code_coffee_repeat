//height of tree
int height(TreeNode* A){
    if(!A) return 0;

    return 1+max(height(A->left),height(A->right));
}
//helper function
int util(TreeNode* A, int B, int &ans){
    if(!A) return 0;

    if(A->val == B) return 1;

    int l = util(A->left,B,ans);
    if(l) {
        ans = max(ans, l+height(A->right));
        return l+1;
    }

    l = util(A->right,B,ans);
    if(l){
        ans = max(ans, l+height(A->left));
        return l+1;
    }
    return 0;
}

//function to calculate
int Solution::solve(TreeNode* A, int B) {
    int ans=0;
    int t = util(A,B,ans);
    return ans;
}
