class Solution {
public:
    string reverseWords(string s) {
        int last = 0;
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || s[i] == ' ') {
                reverse(s.begin() + last, s.begin() + i);
                last = i + 1;
            }
        }
        return s;
    }
};