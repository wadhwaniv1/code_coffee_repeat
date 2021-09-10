int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    int small_right[n], big_left[n];
    small_right[n-1]=A[n-1];
    big_left[0]=A[0];

    for(int i=1;i<A.size();i++){
        big_left[i] = max(A[i],big_left[i-1]);
    }
    for(int i=A.size()-2;i>=0;i--){
        small_right[i] = min(A[i],small_right[i+1]);
    }
    for(int i=1;i<A.size()-1;i++){
        if(A[i]>big_left[i-1] && A[i]<small_right[i+1]){
            return 1;
        }
    }
    return 0;
}
