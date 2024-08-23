class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int s = 0;
        int e = a.size() - 1;
        
        while (s < e) {
            int m = s + (e - s) / 2;
            
            if (a[m] > a[m + 1]) {
                e = m;  // Move towards the peak on the left
            } else {
                s = m + 1;  // Move towards the peak on the right
            }
        }
        
        return s;  // s == e, and this is the peak
    }
};