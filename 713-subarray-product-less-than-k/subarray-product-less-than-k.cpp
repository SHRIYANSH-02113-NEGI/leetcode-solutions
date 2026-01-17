class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long product;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            product = 1;
            for (int j = i; j < nums.size(); j++) {
                product *= nums[j];
                if (product < k)
                    count++;
                else
                    break;
            }
        }
        return count;
    }
};
