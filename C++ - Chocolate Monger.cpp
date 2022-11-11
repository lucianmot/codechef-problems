// C++ - Chocolate Monger
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/CM164364

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int cocoList[n];
        for (int i = 0; i < n; i++) cin >> cocoList[i];

        unordered_map<int, size_t> dupesCount;
        for (int i = 0; i < n; i++) dupesCount[cocoList[i]]++;

        for (auto &e : dupesCount)
            while (e.second > 1 && x > 0) {
                e.second--;
                x--;
            }

        cout << dupesCount.size() - x << endl;
    }
    return 0;
}