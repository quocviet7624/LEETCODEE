class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Mark existing numbers by negating the value at the corresponding index
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        vector<int> res;
        // Any index that still contains a positive number was never "visited"
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};