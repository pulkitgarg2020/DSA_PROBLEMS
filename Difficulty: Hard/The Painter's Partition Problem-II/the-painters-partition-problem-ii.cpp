//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
     long long calcSum(int arr[], int n) {
        long long sum = 0;
        for (long i = 0; i<n; i++) 
            sum+=arr[i];
        return sum;
    }
    
    bool possibleSolution(int arr[], int n, long long m, int k) {
        long long sum = 0;
        int painter = 1;
        
        for (int i = 0; i<n; i++) {
            if (arr[i] > m) return false;
            sum+=arr[i];
            
            if (sum > m) {
                painter++; // next painter starts
                sum = arr[i];
                if (painter > k) return false;
            }
        }
        return true;
    }
    
    
    long long minTime(int arr[], int n, int k)
    {
        // Edge case: If painters are more than or equal to boards
        if (k >= n) return *max_element(arr, arr + n);
        
        long long s = *max_element(arr, arr + n);;
        long long e = calcSum(arr, n);
        long long ans = -1;
        
        while (s <= e) {
            long long m = s+(e-s)/2;
            if (possibleSolution(arr, n, m, k)) {
                ans = m;
                e = m-1;
            } else s = m+1;
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
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends