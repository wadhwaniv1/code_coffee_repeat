class Solution{

    public:
    int maxCandy(int height[], int n)
    {
        // Your code goes here
        int mx=0;
        int i=0,j=n-1;
        while(i<j){
            if (height[i] < height[j])
            {
                mx = max(mx, (j-i-1)*height[i]);
                i++;
            }
            else if (height[j] < height[i])
            {
                mx = max(mx, (j-i-1)*height[j]);
                j--;
            }
            else
            {
                mx = max(mx, (j-i-1)*height[i]);
                i++;
                j--;
            }
        }
        return mx;
    }
};
