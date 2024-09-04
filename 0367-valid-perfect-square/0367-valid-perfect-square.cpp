class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0;
        int e = num;
        while (s <= e) {
            long m = s+(e-s)/2;
            if (m*m == num) return true;
            else if (num > m*m) s = m+1;
            else e = m-1;
        }
        return false;
    }
};