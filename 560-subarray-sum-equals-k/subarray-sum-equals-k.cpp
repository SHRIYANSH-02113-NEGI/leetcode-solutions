class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i = 0;
        int count = 0;
        while (i < nums.size()) {
            int sum = 0;
            int j = i;
            while (j < nums.size()) {
                sum += nums[j];
                if (sum == k) {
                    count++;
                }
                j++;
            }
            i++;
        }
        return count;
    }
};
