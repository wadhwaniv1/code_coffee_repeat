class Solution {
public:

    vector<int> solve(int N){
        vector<int> v;
        v.push_back(1);
        for(int i=2;i<=N;i++){
            int c=0;
            for(int j=0;j<v.size();j++){
                int temp = v[j]*i+c;
                v[j] = temp%10;
                c = temp/10;
            }
            while(c != 0){
                v.push_back(c%10);
                c /= 10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
    vector<int> factorial(int N){
        // code here
        return solve(N);
    }
};
