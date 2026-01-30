class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastPos(128, -1);
        int maxLen = 0, start = -1;
        
        for (int i = 0; i < s.length(); i++) {
            start = max(start, lastPos[s[i]]);
            lastPos[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};