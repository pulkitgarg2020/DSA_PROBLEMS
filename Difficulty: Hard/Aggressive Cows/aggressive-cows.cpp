//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool possibleSolution(vector<int> &stalls, int cows, int min) {
        int c = 1;
        
        int pos = stalls[0]; // first cow ko place kardo
        
        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - pos >= min) {
                c++;
                pos = stalls[i];
            }
            if (c == cows) return true;
        }
        
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int ans;
        int s = 0;
        
        // biggest element - smallest element
        int e = stalls[n-1] - stalls[0];
        
        while (s <= e) {
            int m = s + (e-s)/2;
            if (possibleSolution(stalls, k, m)) {
                ans = m;
                s = m+1;
            } else {
                e = m - 1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends