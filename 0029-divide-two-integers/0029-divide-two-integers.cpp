class Solution {
public:
    long getQuotient(long dividend, long divisor) {
        long s = 0;
        long e = dividend;
        long ans = -1;

        while (s <= e) {
            long m = s + (e-s)/2;
            if (m * divisor == dividend)
               return m;
            if (m * divisor < dividend) {
                ans = m;
                s = m + 1;
            } else e = m - 1;
        }
        return ans;
    }

    int divide(int dividend, int divisor) { 
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;

        long quot = getQuotient(abs(dividend), abs(divisor));
        cout << "Quot: " << quot << endl;
        int ans = quot;
        bool cond = dividend<0;
        cout << "Dividend: " << dividend << " Cond: " << cond << endl;
        cout << "Divisor: " << divisor << endl;

        if (dividend < 0 && divisor < 0) return ans;
        else if (dividend < 0 || divisor < 0) return -(ans);

        // if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
        //     return -ans;
        
        return ans;
    }
};