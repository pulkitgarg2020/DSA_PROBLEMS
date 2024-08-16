class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = 0;
        while (s <= e) {
            long m = s + (e-s)/2;
            if (m*m == x) return m;
            else if (m*m > x) e = m-1;
            else {
                ans = m;
                s = m+1;
            }
        }
        return ans;
    }
};