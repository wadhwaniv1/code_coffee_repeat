vector<int> Solution::plusOne(vector<int> &A) {
    auto it = A.begin();

    //erase all the leading 0's except if A length is 1
    while(*it == 0 && A.size() > 1)
    {
        A.erase(it);
    }
    int n = A.size();
    int carry = 0;

    //carry calculation
    if(A[n-1]+1 > 9){
        A[n-1]=0;
        carry=1;
    }else{
        A[n-1]+=1;
    }

    for(int i=n-2;i>=0;i--){
        if(A[i]+carry > 9){
            A[i]=0;
            carry = 1;
        }else{
            A[i]+=carry;
            carry = 0;
        }
    }

    //if 999+1 then add 1 in beginning
    if(carry == 1)
    A.insert(A.begin(), 1);

    return A;
}
