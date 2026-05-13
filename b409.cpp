class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(128, 0);
        for (char c : s) count[c]++;
        
        int res = 0;
        bool hasOdd = false;
        for (int x : count) {
            res += (x / 2) * 2;
            if (x % 2 == 1) hasOdd = true;
        }
        return hasOdd ? res + 1 : res;
    }
};