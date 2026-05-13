class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int child = 0;
        int cookie = 0;
        
        while (child < g.size() && cookie < s.size()) {
            // If the current cookie can satisfy the current child's greed
            if (s[cookie] >= g[child]) {
                child++;
            }
            // Move to the next cookie regardless
            cookie++;
        }
        
        return child;
    }
};