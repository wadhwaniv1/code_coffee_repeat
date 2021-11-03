class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        ans.push_back({1});
        vector<int> v1;
        v1.push_back(1);
        if(numRows == 1)
            return ans;

        int i=2;
        while(i<=numRows){
            vector<int> v;
            v.push_back(1);
            for(int j=0;j<v1.size()-1;j++){
                v.push_back(v1[j]+v1[j+1]);
            }
            v.push_back(1);
            ans.push_back(v);
            v1=v;
            i++;
        }

        return ans;
    }
};
