#include <bits/stdc++.h>

using namespace std;

int solve(int n, int base)
{
    int result = 0 ;
    while (n > 0)
    {
        int remainder = n % base ;
        result = result + remainder ;
        n = n / base;
    }
    return result ;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,l,r;
        cin>>n>>l>>r;

        if(r>=n && l<=n)
        {
            cout<<n<<endl;
            continue;
        }
        int mi = INT_MAX,ans;
        for(int i=l;i<=r;i++){
            if(mi > solve(n,i)){
                mi=solve(n,i);
                ans=i;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
