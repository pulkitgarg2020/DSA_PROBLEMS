class Solution {
public:
    int calcSum(vector<int> &s) {
        int sum = 0;
        for (int i: s) sum = sum+i;
        return sum;
    }

    bool possibleSolution(vector<int>& w, int days, int mid) {
        int sum = 0;
        int c = 1;
        for (int i=0; i<w.size(); i++) {
            if (w[i] > mid) return false;
            sum+=w[i];
            if (sum > mid) {
                c++;
                sum = w[i];

                if (c>days) return false;
            } 
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int e = calcSum(weights);
        int ans = -1;
        while (s <= e) {
            int m = s+(e-s)/2;
            if (possibleSolution(weights, days, m)) {
                ans = m;
                e = m-1;
            } else s = m+1;
        }
        return ans;
    }
};