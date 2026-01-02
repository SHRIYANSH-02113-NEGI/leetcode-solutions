class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (auto a : nums) {
            mp[a]++;
        }

        for (auto i : mp) {
            if (i.second > 1) {
                return i.first;
            }
        }
        return -1;
    }
};
