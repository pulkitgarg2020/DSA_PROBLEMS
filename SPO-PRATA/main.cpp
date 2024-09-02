#include <iostream>
using namespace std;
#include <math.h>
#include <vector>

int paranthaTime(int p) {
    return p*(p+1)/2;
}

bool isPossible(vector<int> cooks, int p, int time) {
    int cooked = 0;
    for (auto cook: cooks) {
        int timeTaken = 0;
        int k = 1;

        while (timeTaken + cook * k <= time) {
                timeTaken += cook * k;
                cooked++;
                k++;
            if (cooked >= p) return true;
        }
    }
    return false;
}

int prata(vector<int> cooks, int p) {
    int s = 0;
    int highestRank = *max_element(cooks.begin(), cooks.end());
    int e = highestRank*paranthaTime(p);
    int ans = 0;
    while (s<=e) {
        int m = s+(e-s)/2;
        if (isPossible(cooks, p, m)) {
            ans = m;
            e = m-1;
        } else s = m+1;
    }
    return ans;
}

int main() {
    // Test Case 1
    vector<int> cooks1{1, 2, 3, 4};
    int p1 = 10;
    cout << "Test Case 1: " << prata(cooks1, p1) << " (Expected: 12)" << endl;

    // Test Case 2
    vector<int> cooks2{1, 2, 3, 4};
    int p2 = 5;
    cout << "Test Case 2: " << prata(cooks2, p2) << " (Expected: 7)" << endl;

    // Test Case 3
    vector<int> cooks3{1, 2};
    int p3 = 10;
    cout << "Test Case 3: " << prata(cooks3, p3) << " (Expected: 21)" << endl;

    // Test Case 4
    vector<int> cooks4{3, 1, 4, 2};
    int p4 = 8;
    cout << "Test Case 4: " << prata(cooks4, p4) << " (Expected: 9)" << endl;

    // Test Case 5
    vector<int> cooks5{4, 3, 2, 1};
    int p5 = 15;
    cout << "Test Case 5: " << prata(cooks5, p5) << " (Expected: 21)" << endl;

    // Test Case 6
    vector<int> cooks6{10};
    int p6 = 5;
    cout << "Test Case 6: " << prata(cooks6, p6) << " (Expected: 150)" << endl;

    // Test Case 7
    vector<int> cooks7{1};
    int p7 = 8;
    cout << "Test Case 7: " << prata(cooks7, p7) << " (Expected: 36)" << endl;
    return 0;
}