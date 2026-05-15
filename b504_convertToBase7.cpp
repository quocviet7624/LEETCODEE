class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        string res = "";
        int n = abs(num);
        while (n) {
            res = to_string(n % 7) + res;
            n /= 7;
        }
        return num < 0 ? "-" + res : res;
    }
};