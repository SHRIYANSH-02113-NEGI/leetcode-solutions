class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        
        int index = 0;  // position to write
        int i = 0;

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // count repeating characters
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }

            // write the character
            chars[index++] = curr;

            // write count if > 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[index++] = ch;
                }
            }
        }

        return index;
    }
};