class Solution {
public:
    int binarySearch(vector<int>& heaters, int house) {
        int s = 0;
        int e = heaters.size() - 1;
        while (s <= e) {
            int m = s+(e-s)/2;

            if (house > heaters[m]) {
                s = m + 1;
            }
            else e = m - 1;
        }

        // `s` might be out of bounds, so we handle both cases
        int dist1 = (s < heaters.size()) ? abs(house - heaters[s]) : INT_MAX;
        int dist2 = (e >= 0) ? abs(house - heaters[e]) : INT_MAX;

        return min(dist1, dist2);
    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {
        for (int i=0; i < houses.size(); i++) { 
            houses[i] = binarySearch(heaters, houses[i]);
        }
        return *std::max_element(houses.begin(), houses.end());
    }
};