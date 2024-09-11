class Solution {
public:
    int countPrimesSieve(int n) {
        if (n == 0) return 0;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        int ans = 0;

        for (int i=2; i<n; i++) {
            if (prime[i]) {
                ans++;

                int j = 2*i;
                while (j < n) {
                    prime[j] = false;
                    j+=i;
                }
            }
        }
        return ans;
    }

    int countPrimesSieveOptimized(int n) {
        if (n == 0) return 0;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        int ans = 0;

        for (int i=2; i<n; i++) {
            if (prime[i]) {
                ans++;

                // int j = 2*i;
                long long j = i * i; // Optimization 1
                // first unmarked number would be i*i as others 
                // have been marked by 2 to (i-1)
                while (j < n) {
                    prime[j] = false;
                    j+=i;
                }
            }
        }
        return ans;
    }

    int countPrimes(int n) {
        return countPrimesSieveOptimized(n);
    }
};