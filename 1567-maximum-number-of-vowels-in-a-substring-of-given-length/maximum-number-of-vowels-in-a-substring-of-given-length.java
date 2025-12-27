class Solution {

    public static boolean isvow(char a) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            return true;
        }
        return false;
    }

    public int maxVowels(String s, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int max = 0;

        while (j < s.length()) {

            if (isvow(s.charAt(j))) {
                count++;
            }

            if (j - i + 1 > k) {
                if (isvow(s.charAt(i))) {
                    count--;
                }
                i++;
            }

            if (j - i + 1 == k) {
                max = Math.max(max, count);
            }

            j++;
        }
        return max;
    }
}
