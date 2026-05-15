class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, cur = 0;
        for (int n : nums) {
            res = max(res, cur = n ? cur + 1 : 0);
        }
        return res;
    }
};