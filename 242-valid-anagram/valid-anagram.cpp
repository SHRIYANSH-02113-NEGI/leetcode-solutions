class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> v(26,0);
        for(auto vc:s){
            v[vc-'a']++;
        }
        for(auto bb:t){
            v[bb-'a']--;
        }
        for(auto a:v){
            if(a!=0){
                return false;
            }
        }
        return true;
    }
};
