class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        int carry = 1;

        while (i >= 0 && carry) {
            if (digits[i] == 9) {
                digits[i] = 0;
                carry = 1;
            } else {
                digits[i] = digits[i] + carry;
                carry = 0;
            }
            i--;
        }
        if (carry) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
