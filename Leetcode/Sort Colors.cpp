class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Counting sort
        int c0=0,c1=0,c2=0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0)
            c0++;
            if(nums[i]==1)
            c1++;
            if(nums[i]==2)
            c2++;
        }
        nums.clear();
        //vector<int> ans;
        while(c0--)
            nums.push_back(0);
        while(c1--)
            nums.push_back(1);
        while(c2--)
            nums.push_back(2);
    }
};
/*Dutch national flag (low/mid/high)
*/
