#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=1;
    int t;
    cin>>t;
    while(t--){
        int d,n,k;
        cin>>d>>n>>k;
        map<int, vector<int>> mp;

        while(n--){
            int h,s,e;
            cin>>h>>s>>e;
            for(int j=s;j<=e;j++){
                mp[j].push_back(h);
            }
        }
        int ans=0;
        for(auto y:mp){
            int x = 0;
            int p = y.second.size();
            sort(y.second.begin(), y.second.end(), greater<int>());
            for(int j=0;j<k && j<p;j++){
                x += y.second[j];
            }
            ans=max(ans,x);
        }
        cout<<"Case #"<<i<<": "<<ans<<endl;
        i++;
    }
    return 0;
}
