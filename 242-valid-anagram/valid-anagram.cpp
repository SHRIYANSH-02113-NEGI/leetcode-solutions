class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char,int> mp;
        for (auto character : s) {
            mp[character]++;
        }

        for (auto word : t) {
            if (mp.find(word) == mp.end() || mp[word] == 0) {
                return false;
            }
            mp[word]--;
        }
        return true;
    }
};
