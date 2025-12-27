class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result(n, -1);
        if (k == 0) return nums;
        if (2*k+1>n) return result;
        vector<long long> prefix(n);
        prefix[0] = nums[0];
        for (int i=1;i<n;i++) {
            prefix[i] = prefix[i-1]+nums[i];
        }
        for (int i=k;i+k<n;i++) {
            int left = i - k;
            int right = i + k;
            long long sum = prefix[right];
            if (left > 0) sum -= prefix[left - 1];

            result[i] = sum / (2 * k + 1);
        }

        return result;
    }
};
