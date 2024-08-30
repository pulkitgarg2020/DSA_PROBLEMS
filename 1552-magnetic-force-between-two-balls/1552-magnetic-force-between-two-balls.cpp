class Solution {
public:
    bool possibleSolution(vector<int>& p, int balls, int mid) {
        int c = 1;
        int pos = p[0];
        for (int i=1; i<p.size(); i++) {
            if (p[i]-pos >= mid) {
                c++;
                pos = p[i];

                if (c==balls) return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int s = 0;
        int n = position.size();
        int e = position[n-1] - position[0];
        int ans = -1;
        while (s <= e) {
            int mid = s + (e-s)/2;
            if (possibleSolution(position, m, mid)) {
                ans = mid;
                s = mid+1;
            } else {
                e = mid-1;
            }
        }
        return ans;
    }
};