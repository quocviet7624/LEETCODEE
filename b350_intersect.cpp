class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counts;
        for (int n : nums1) counts[n]++;
        
        vector<int> res;
        for (int n : nums2) {
            if (counts[n] > 0) {
                res.push_back(n);
                counts[n]--;
            }
        }
        return res;
    }
};