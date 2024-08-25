class Solution {
public:
    int binarySearch(vector<int> &a, int t) {
        int s = 0;
        int e = a.size()-1;
        while (s <= e) {
            int m = s+(e-s)/2;
            if (a[m] == t) return a[m];
            else if (t > a[m]) s=m+1;
            else e = m-1;
        }
        return -1;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (auto i: nums1) {
            int find = binarySearch(nums2, i);
            if (find != -1)
                return find;
        }

        return -1;
    }
};