class Solution {
public:
    bool isPossible(long num, int s) {
        long e = num;
        while (s <= e) {
            long m = s+(e-s)/2;
            if (m*m == num) return true;
            else if (num > m*m) s = m+1;
            else e = m-1;
        }
        return false;
    }

    bool judgeSquareSum(int c) {
        if (c==0) return true;
        for (long i = 0; i<c; i++) {
            long sq = i*i;
            if (i*i > c) return false;
            if (isPossible(c - i*i, i)) return true;
        }
        return false;
    }
};