class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        unordered_map<int,int> mp;
        for(auto x: changed)
            mp[x]++;
        vector<int> ans;
        sort(changed.begin(),changed.end());
        for(auto x: changed){
            if(mp.find(x*2) != mp.end() && mp[x] != 0 && mp[x*2] != 0)
            {
                mp[x]--;
                mp[x*2]--;
                ans.push_back(x);
            }
        }
        for(auto x: mp){
            if(x.second != 0)
                return {};
        }
        return ans;
    }
};
