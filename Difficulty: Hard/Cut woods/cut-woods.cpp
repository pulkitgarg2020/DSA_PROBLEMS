//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    
    bool possibleSolution(vector<int>& v, int k, int mid) {
        long long sum = 0;
        for (int i: v) {
            int elem = i - mid;
            if (elem > 0) sum+=elem;
            if (sum >= k) return true;
        }
        if (sum < k) return false;
        return true;
    }
    
    int maxHeight(vector<int>&A, int M){
        //Write your code here
        int n = A.size();
        int s = 0;
        int e = *max_element(A.begin(), A.end());
        int ans = -1;
        while (s <= e) {
            int mid = s+(e-s)/2;
            if (possibleSolution(A, M, mid)) {
                ans = mid;
                s = mid+1;
            } else e = mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>A(n);
	    for(int i = 0; i < n; i++){
	       cin >> A[i];
	    }
	    int M;
	    cin >> M;
	    Solution ob;
	    int ans = ob.maxHeight(A, M);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends