//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool possibleSolution(vector<int> &A, int height, int B) {
        int sum = 0;
        for (auto tree: A) {
            if (tree > height) sum+=(tree-height);
        }
        
        return sum >= B;
    }
    int maxHeight(vector<int>&A, int M){
        //Write your code here
        int s = 0;
        int e = *std::max_element(A.begin(), A.end());
        int ans = 0;
        while (s <= e) {
            int m = s + (e-s)/2;
            if (possibleSolution(A, m, M)) {
                ans = m;
                s = m + 1;
            } else e = m - 1;
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