class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i1=-1,i2=-1;

        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                i1=i-1;
                break;
            }
        }
        if(i1==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i1]){
                i2=i;
                break;
            }
        }
        swap(nums[i1],nums[i2]);
        reverse(nums.begin()+i1+1,nums.end());
    }
};
