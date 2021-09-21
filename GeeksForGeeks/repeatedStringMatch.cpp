class Solution{

    public:
    int repeatedStringMatch(string A, string B)
    {
        // Your code goes here
        int n = B.length();
        int m = A.length();

        int count = n/m;
        int c=1;
        string s = A;
        for(int i=0;i<=count+1;i++){
            if(s.find(B) != string::npos){
                return c;
            }
            else{
                s += A;
                c++;
            }
        }
        return -1;
    }

};
