//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    
    long calcSum(int n, int arr[]) {
        long sum = 0;
        for (int i=0; i<n; i++) sum+=arr[i];
        return sum;
    }
    
    bool possibleSolution(int n, int arr[], long mid, int m) {
        long sum = 0;
        int student = 1;
        
        for (int i=0; i<n; i++) {
            if (arr[i] > mid) return false;
            sum+=arr[i];
            
            if (sum > mid) {
                student++;
                sum = arr[i];
                if (student > m) return false;
            }
        }
        return true;
    }
        
    long binarySearch(int n, int arr[], int m) {
        long s = 0;
        long e = calcSum(n, arr);
        long ans = -1;
        while (s <= e) {
            long mid = s + (e-s)/2;
            if (possibleSolution(n, arr, mid, m))  {
                ans = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        
        return ans;
    }
    
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m > n) return -1;
        return binarySearch(n, arr, m);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends