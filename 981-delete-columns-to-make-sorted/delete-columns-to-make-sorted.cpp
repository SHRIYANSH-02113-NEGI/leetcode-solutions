class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int col = 0;
        int rows = strs.size();
        int cols = strs[0].size();

        while (col < cols) {
            int row = 1;
            while (row < rows) {
                if (strs[row][col] < strs[row - 1][col]) {
                    count++;
                    break;
                }
                row++;
            }
            col++;
        }
        return count;
    }
};