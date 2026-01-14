class Solution {
public:
    vector<int> getMaxleft(vector<int> &arr, int n) {
        vector<int> max1(n);
        max1[0] = arr[0];
        for (int i = 1; i < n; i++) {
            max1[i] = max(max1[i-1], arr[i]);
        }
        return max1;
    }

    vector<int> getMaxright(vector<int> &arr, int n) {
        vector<int> max1(n);
        max1[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            max1[i] = max(max1[i+1], arr[i]);
        }
        return max1;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;

        vector<int> leftMax = getMaxleft(height, n);
        vector<int> rightMax = getMaxright(height, n);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += min(leftMax[i], rightMax[i]) - height[i];
        }
        return sum;
    }
};
