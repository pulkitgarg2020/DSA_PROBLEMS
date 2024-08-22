class Solution {
public:

    int binarySearch(vector<int>& a, int x) {
        int s = 0;
        int e = a.size() - 1;

        while (s <= e) {
            int m = s + (e-s)/2;
            if (a[m] == x) return m;
            else if (a[m] > x) e = m-1;
            else s = m+1;
        }

        return -1;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        
        // if the length of the vector is 
        // equal to k then return the 
        // vector
        if (k == arr.size()) return arr;
        int s=0, e=arr.size()-1;

        int c_start;
        int c_end;

        int exist = binarySearch(arr, x);

        // If element is not in the array
        if (exist == -1) {
            if (arr[e] < x) {
                // if element in not in array
                // and is bigger than the last
                // elem that means the size - k
                // se shuru hoke sare uske baad
                // closest elements hai
                c_start = arr.size() - k;
                c_end = arr.size();
            } else if (arr[s] > x) {
                // if element in not in arry and is smaller
                // than the first element, then the closest
                // elements start se leke k tak honge
                c_start = 0;
                c_end = k;
            } else {
                int l = 0, r = arr.size() - 1;

                while (r - l + 1 > k) {
                    if (x - arr[l] <= arr[r] - x) {
                        r--;  // Right side element is farther or equal distance, move `r` left
                    } else {
                        l++;  // Left side element is closer, move `l` right
                    }
                }

                c_start = l;
                c_end = r + 1;
            }
        } else {
            // Element exists in the array
            
            // because we found one element in the arry
            int l, r;
            
            l = exist-1;
            r = exist+1;

            while(k>1) {
                if (l >= 0 && (r >= arr.size() || abs(x - arr[l]) <= abs(arr[r] - x))) l--;
                else r++;
                k--;
            }

            c_start = l + 1;
            c_end = r;
        }

        for (int i=c_start; i<c_end; i++) {
            ans.push_back(arr[i]);
        }

        sort(ans.begin(), ans.end()); 
        return ans;
    }
};