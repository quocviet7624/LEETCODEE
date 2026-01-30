class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> A = nums1;
        A.insert(A.end(), nums2.begin(), nums2.end());
        sort(A.begin(), A.end());
        
        int n = A.size();
        if (n % 2) return A[n / 2];
        return (A[n / 2 - 1] + A[n / 2]) / 2.0;
    }
};