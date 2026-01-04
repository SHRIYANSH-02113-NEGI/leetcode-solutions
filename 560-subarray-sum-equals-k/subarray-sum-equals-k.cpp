class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;//ki sum-k=0 mtlb mill gaya ek subarray   
        int sum = 0;
        int count = 0;
        for (int a : nums) {
            sum=sum+a;
            if (mp.find(sum - k) != mp.end())//mtlb map mai element present h  
            {
                count=count+mp[sum - k];//value access kr dega
            }
            mp[sum]++;
        }
        return count;
    }
};
