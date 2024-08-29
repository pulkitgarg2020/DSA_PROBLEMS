class Solution {
public:
    int findTravelTime(vector<int>& travel, int till) {
        int time = 0;
        for (int i=0; i<till; i++) {
            time+=travel[i];
        }
        return time;
    }

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pick_P = 0;
        int pick_G = 0;
        int pick_M = 0;

        int t_P = 0;
        int t_G = 0;
        int t_M = 0;

        int till_P = 0;
        int till_G = 0;
        int till_M = 0;

        for (int i=0; i<garbage.size(); i++) {
            for (char j: garbage[i]) {
                if (j == 'P') {
                    pick_P++;
                    till_P = i;
                }
                if (j == 'G') {
                    pick_G++;
                    till_G = i;
                }
                if (j == 'M') {
                    pick_M++;
                    till_M = i;
                }
            }
        }

        t_P = findTravelTime(travel, till_P);
        t_G = findTravelTime(travel, till_G);
        t_M = findTravelTime(travel, till_M);

        return t_P + pick_P + t_G + pick_G + t_M + pick_M;
    }
};