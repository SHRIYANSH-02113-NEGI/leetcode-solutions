class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int right=0;
        int count=0;
        int maxl=0;
        while(right<nums.size()){
            if(nums[right]==0){
                count++;
            }
            while(count>1){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            maxl=max(maxl,right-left);
            right++;
        }
        return maxl;
    }
};