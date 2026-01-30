class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() < 1) return "";
        int start = 0, maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            // Kiểm tra cả tâm lẻ (i, i) và tâm chẵn (i, i + 1)
            expand(s, i, i, start, maxLen);
            expand(s, i, i + 1, start, maxLen);
        }
        return s.substr(start, maxLen);
    }

private:
    void expand(string& s, int l, int r, int& start, int& maxLen) {
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
    }
};