int Solution::isPalindrome(string A) {
    string s;
    for(int i=0;i<A.length();i++){
        if(isalpha(A[i]) || isdigit(A[i])){
            if(isalpha(A[i]))
            //tolower() belongs to cwctype header file
            //wint_t towlower( wint_t ch )
            //type cast in char to store
            s += char(tolower(A[i]));
            else
            s += A[i];
        }
    }

    for(int i=0;i<(s.length()/2);i++){
        //last element is 0 in s
        if(s[i] != s[s.length()-i-1]){
            return 0;
        }
    }
    return 1;
}
