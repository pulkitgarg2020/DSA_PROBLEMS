class Solution {
public:
    int binarySearch(vector<int> &v) {
        int s = 0;
        int e = v.size()-1;
        int count = 0;
        int i = -1;
        while (s<=e) {
            int m = s + (e-s)/2;
            if (v[m] < 0) {
                i = m; 
                e = m-1;
            } else s = m+1;
        }
        if (i == -1) return 0;
        return v.size()-i;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto row: grid) count = count + binarySearch(row);
        return count;
    }
};