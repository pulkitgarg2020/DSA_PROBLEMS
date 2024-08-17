//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

    int findRange(int nums[], int n, int target, bool range) {    
        int first = -1;   
        int s = 0;
        int e = n - 1;

        while (s <= e) {
            int m = (s+e)/2;
            if (nums[m] == target) {
                first = m;
                if (range)
                    e = m-1;
                else 
                    s = m+1;
            } else if (target > nums[m])
                s = m+1;
            else 
                e = m-1;
        }

        return first;
    }
    
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first = findRange(arr, n, x, false);
	    int last = findRange(arr, n, x, true);
	    if (first == -1 && last == -1)
	        return 0;
	    return findRange(arr, n, x, false) - findRange(arr, n, x, true) + 1;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends