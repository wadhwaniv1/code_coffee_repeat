class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n = prices.size();

        int pr=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            mn = min(mn,prices[i]);
            pr = max(pr,prices[i]-mn);
        }

        return pr;
    }
};
