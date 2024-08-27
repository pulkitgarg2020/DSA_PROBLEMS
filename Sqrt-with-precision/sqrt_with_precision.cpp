class Solution
{
public:
    int findSqrt(int num)
    {
        int s = 0;
        int e = num;
        int sqrt = 0;
        while (s <= e)
        {
            double m = s + (e - s) / 2;
            if (m * m == num)
                return m;
            else if (m * m > num)
                e = m - 1;
            else
            {
                sqrt = m;
                s = m + 1;
            }
        }
        return sqrt;
    }

    double findSqrtPrecision(int num, int p)
    {
        int sqrt = findSqrt(num);
        double sqrt_precision = sqrt;
        p = -p;
        for (double i = sqrt_precision; i <= num; i = i + pow(10, p))
        {
            if (i * i < num)
                sqrt_precision = i;
            else
                break;
        }
        return sqrt_precision;
    }
};