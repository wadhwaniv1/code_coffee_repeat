int Solution::solve(vector<int> &A) {

    //O(nlog n)
    int n = A.size();
    int right_prefix[n];
    right_prefix[n-1]=A[n-1];

    //calculating right prefix array for right side element O(1)
    for(int i=n-2;i>=0;i--){
        right_prefix[i] = max(A[i],right_prefix[i+1]);
    }

    set<int> s;
    //taking lower bound - 1 element for left side O(log N)
    s.insert(INT_MIN);
    int sum=0;
    for (int i=0; i<n-1; i++) {
        if (right_prefix[i + 1] > A[i]) {
            auto it = lower_bound(s.begin(), s.end(), A[i]);
            it--;
            sum = max(sum, *(it) + A[i] + right_prefix[i + 1]);
            s.insert(A[i]);
        }
    }
    return sum;
}
