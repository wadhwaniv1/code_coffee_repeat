#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int c=0;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int N = s.length();
        int rp[N],lp[N];

        int pos=-1;
        for(int i=0;i<N;i++){
            if(s[i]=='1'){
                lp[i] = -1;
                pos = i;
            }else{
                if(pos != -1)
                lp[i] = i-pos;
                else
                lp[i] = -1;
            }
        }

        pos=-1;
        for(int i=N-1;i>=0;i--){
            if(s[i]=='1'){
                rp[i] = -1;
                pos = i;
            }else{
                if(pos != -1)
                rp[i] = pos-i;
                else
                rp[i] = -1;
            }
        }

        int res = 0;
        for(int i=0;i<N;i++){
            if(lp[i] == -1 && rp[i] == -1)
            continue;
            else if(lp[i] == -1)
            res += rp[i];
            else if(rp[i] == -1)
            res += lp[i];
            else
            res += min(lp[i],rp[i]);
        }
        c++;
        cout<<"Case #"<<c<<": "<<res<<endl;
    }
    return 0;
}
