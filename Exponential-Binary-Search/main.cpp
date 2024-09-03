#include <iostream>
using namespace std;
#include <math.h>
#include <vector>

int binarySearch(vector<int>& v, int s, int e, int t) {
    while (s <= e) {
        int m = s + (e - s)/2;
        if (v[m] == t) return m;
        else if (t > v[m]) s = m + 1;
        else e = m - 1;
    }
    return -1; 
}

int exponentialSearch(vector<int>& v, int t) {
    if (v[0] == t) return 0;
    int i = 1;
    int n = v.size();
    while (i<n && v[i] <= t) i = i*2;
    return binarySearch(v, i/2, min(i, n-1), t);
}

int main() {
    vector<int> v{3, 5, 6, 8, 11, 25, 30, 65, 70};
    int t = 65;
    cout << exponentialSearch(v, t);
    return 0;
}