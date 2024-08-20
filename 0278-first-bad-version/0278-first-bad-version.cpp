// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1;
        int e = n;
        int ans = -1;

        while (s <= e) {
            int m = s + (e-s)/2;
            bool bad = isBadVersion(m);
            if (bad) {
                ans = m;
                e = m-1;
            } else s = m+1;
        }
        return ans;
    }
};