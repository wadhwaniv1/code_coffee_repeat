
//https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/
void solve(TreeNode* root, int num, int &res) {
    if(root == NULL)
    return;

    num = (num*10 + root->val)%1003;

    if(root->left == NULL && root->right == NULL)
    res=(res + num)%1003;

    solve(root->left, num, res);
    solve(root->right, num, res);
}

int Solution::sumNumbers(TreeNode* A) {
    int res = 0;
    solve(A, 0, res);
    return res;
}
