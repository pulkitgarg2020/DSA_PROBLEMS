class Solution {
public:
    double bruteforce(vector<int>& nums, int &k) {
        int n = nums.size() - k;
        double max_av = numeric_limits<double>::lowest();
        for (int i = 0; i<=n; i++) {
            double sum = 0;
            for (int j=0; j<k; j++) {
                sum = sum + nums[i+j];
            }
            double av = sum/k;
            if (av > max_av)
                max_av = av;
        }
        return max_av;   
    }

    double slidingWindow(vector<int>& nums, int &k) {
        int n = nums.size();
        int i=0, j = k-1;
        int sum = 0;
        for(int y=0; y<=j; y++)
            sum+=nums[y];
        int max_sum = sum;
        j++;
        while (j<n) {
            sum-=nums[i++];
            sum+=nums[j++];
            max_sum = max(max_sum, sum);
        }
        return max_sum/double(k);
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    }
};