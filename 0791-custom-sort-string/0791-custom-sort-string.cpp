class Solution {
public:
    // bool compare(char a, char b) {
    //     return order.find(a) < order.find(b);
    // }
    string customSortString(string order, string s) {
        auto compare = [order](int a, int b) {
            return order.find(a) < order.find(b);
        };
        sort(s.begin(), s.end(), compare);
        return s;
    }
};