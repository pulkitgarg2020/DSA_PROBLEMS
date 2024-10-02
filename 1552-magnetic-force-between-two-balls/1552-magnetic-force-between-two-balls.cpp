class Solution {
public:
    bool possibleSolution(int d, vector<int>& p, int numBall) {
        // assume first ball is placed at first position
        int first = p[0];

        // agar main ball rakhta hoon 2nd, distance b/w 1st and
        // 2nd ball >= distance
        // if this is true, ball rakhdo
        // phr next ball ko dekho
        int ball = 1;
        int last = p[0];
        for (int i=1; i<p.size(); i++) {
            int dis = p[i] - last;

            if (dis >=  d) {
                ball++;
                last = p[i];
                if (ball == numBall) return true;
            }
        }
        return false;
    }

    int binarySearch(vector<int>& p, int numBall) {
        // search space define karta hai 
        int n = p.size()-1;
        int s = 0;
        int e = p[n] - p[0];
        int ans = 0;
        while (s <= e) {
            int mid = s + (e-s)/2;
            if (possibleSolution(mid, p, numBall)) {
                ans = mid;
                s = mid + 1;
            }
            else e = mid - 1;
        }
        return ans;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int ans = binarySearch(position, m);
        return ans;
    }
};

/*
1 3 7 == 2, 4 ==> 2
1 3 4 == 2, 1 ==> 1
2 4 7 == 2, 3 ==> 2
1 4 7 == 3, 3 ==> 3

1 2 3 4 7 
*/