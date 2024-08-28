class Solution {
public:
    int convertToMinutes(int hour) {
        return 60*hour;
    }

    void printVector(vector<int> ans) {
        for (auto i: ans)
            cout << i << endl;
    }

    int findMinDifference(vector<string>& s) {
        vector<int> ans;
        int hour, min;
        for (auto i: s) {
            hour = stoi(i.substr(0, 2));
            min = stoi(i.substr(3, 2));
            int minutes = convertToMinutes(hour) + min;
            ans.push_back(minutes);
        }
        sort(ans.begin(), ans.end());

        int m = INT_MAX;
        for (int i = 0; i < ans.size() - 1; i++) {
            int diff = ans[i + 1] - ans[i];
            if (diff < m) m = diff;
        }

        // Check the difference between the last and first time points (circular difference)
        int circular_diff = (1440 - ans.back() + ans.front());
        m = std::min(m, circular_diff);

        return m;
    }
};