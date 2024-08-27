#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution
{
public:
    long getQuotient(long dividend, long divisor)
    {
        long s = 0;
        long e = dividend;
        long ans = -1;

        while (s <= e)
        {
            long m = s + (e - s) / 2;
            if (m * divisor == dividend)
                return m;
            else if (m * divisor < dividend)
            {
                ans = m;
                s = m + 1;
            }
            else
                e = m - 1;
        }
        return ans;
    }

    double dividePrecision(int dividend, int divisor, int p)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long quot = getQuotient(abs(dividend), abs(divisor));
        double precise;
        for (double i = quot; i <= abs(dividend); i = i + pow(10, -p))
        {
            if (i * abs(divisor) <= abs(dividend))
                precise = i;
            else
                break;
        }

        if (dividend < 0 && divisor < 0)
            return precise;
        else if (dividend < 0 || divisor < 0)
            return -(precise);

        return precise;
    }
};