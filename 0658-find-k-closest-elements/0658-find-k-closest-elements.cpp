class Solution {
public:

    int lowerBound(vector<int> &a, int x) {
        int s = 0;
        int e = a.size() - 1;
        int ans = e;
        while (s<=e) {
            int m = s+(e-s)/2;
            if (a[m] >= x) {
                ans=m;
                e = m-1;
            } else if (x>a[m]) s = m+1;
            else e = m-1;
        }
        return ans;
    }

    vector<int> binarySearchMethod(vector<int>& arr, int k, int x) {
        int h = lowerBound(arr, x);
        int l = h-1;
        while (k--) {
            if (l < 0) h++;
            else if (h >= arr.size()) l--;
            else if (x-arr[l] > arr[h]-x) h++;
            else l--;
        }
        // low and high is not included
        return vector<int>(arr.begin()+l+1, arr.begin()+h);
    }

    vector<int> twoPointerApproach(vector<int>& arr, int k, int x) {
        int l = 0;
        int h = arr.size() - 1;

        while (h-l >= k) {
            if (x - arr[l] > arr[h] - x) l++;
            else h--;
        }

        return vector<int>(arr.begin()+l, arr.begin()+h+1);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return binarySearchMethod(arr, k, x);
    }
};