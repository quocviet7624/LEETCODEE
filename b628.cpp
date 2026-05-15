class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // The maximum product can come from two cases:
        // 1. Three largest positive numbers
        // 2. Two smallest negative numbers (which become positive when multiplied) and the largest positive number
        return max(nums[n - 1] * nums[n - 2] * nums[n - 3], 
                   nums[0] * nums[1] * nums[n - 1]);
    }
};