int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,n=A.size(),m_sum=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=A[i];
        m_sum=max(m_sum,sum);
        if(sum<0){
            sum=0;
        }
    }
    return m_sum;
}
