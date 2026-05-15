class NumArray {
    vector<int> p;
public:
    NumArray(vector<int>& nums) {
        p.push_back(0);
        for (int n : nums) {
            p.push_back(p.back() + n);
        }
    }
    
    int sumRange(int left, int right) {
        return p[right + 1] - p[left];
    }
};