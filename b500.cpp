class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> rowIdx(26);
        string rows[] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < 3; i++)
            for (char c : rows[i]) rowIdx[c - 'a'] = i;

        vector<string> res;
        for (string& w : words) {
            int r = rowIdx[tolower(w[0]) - 'a'], valid = 1;
            for (char c : w)
                if (rowIdx[tolower(c) - 'a'] != r) { valid = 0; break; }
            if (valid) res.push_back(w);
        }
        return res;
    }
};