class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> common;
        unordered_set<int> s(nums1.begin(),nums1.end());
        for(int &a:nums2){
            if(s.count(a)!=0){
                common.insert(a);
            }
        }
        return vector<int> (common.begin(),common.end());
    }
};
