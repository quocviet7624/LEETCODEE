class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) pq.push({score[i], i});
        
        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            int idx = pq.top().second; pq.pop();
            if (i == 0) res[idx] = "Gold Medal";
            else if (i == 1) res[idx] = "Silver Medal";
            else if (i == 2) res[idx] = "Bronze Medal";
            else res[idx] = to_string(i + 1);
        }
        return res;
    }
};