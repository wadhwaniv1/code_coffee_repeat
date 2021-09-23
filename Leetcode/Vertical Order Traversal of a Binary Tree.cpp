class Solution {
    map<int,map<int,multiset<int>>> mp;
    void solve(TreeNode* root, int col, int row){
        if(!root) return;

        mp[col][row].insert(root->val);
        solve(root->left, col-1, row+1);
        solve(root->right, col+1, row+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);

        vector<vector<int>> v;
        for(auto x: mp){
            vector<int> v1;
            for(auto y: x.second){
                for(auto z: y.second){
                    v1.push_back(z);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};
