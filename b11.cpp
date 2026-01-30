class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_a = 0, l = 0, r = height.size() - 1;
        while (l < r) {
            max_a = max(max_a, (r - l) * min(height[l], height[r]));
            if (height[l] < height[r]) l++;
            else r--;
        }
        return max_a;
    }
};