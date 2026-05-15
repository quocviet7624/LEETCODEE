class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (int num : nums) counts[num]++;
        
        int res = 0;
        for (auto [num, count] : counts) {
            if (counts.count(num + 1)) {
                res = max(res, count + counts[num + 1]);
            }
        }
        return res;
    }
};