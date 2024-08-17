//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    int bruteForce(vector<int> &arr) {
        for (int i=0; i<arr.size(); i++) {
            for(int j=i+1; j<arr.size(); j++) {
                if (arr[i] == arr[j])
                    return i+1;
            }
        }
        return -1;
    }
    
    int optimized(vector<int> &arr) {
        // Finds the highest value in the array and returns
        // an iterator to it which we can de reference to 
        // find the value
        int max_val = *max_element(arr.begin(), arr.end());
        
        vector<int> num(max_val+1, 0);
        
        for (int i=0; i<arr.size(); i++) {
            num[arr[i]]++;
        }
        
        for (int i=0; i<arr.size(); i++) {
            if (num[arr[i]] > 1)
                return i+1;
        }
        return -1;
    }
    
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        return optimized(arr);
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends
