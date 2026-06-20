class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> digit(nums.begin(),nums.end());
        int diff=nums.size()-digit.size();
        if(diff==0){
            return false;
        }
        return true;
    }
};