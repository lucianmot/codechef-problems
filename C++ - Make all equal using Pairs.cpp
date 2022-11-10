// C++ - Make all equal using Pairs
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/PAIREQ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        unordered_map<int, int> uniqueElem;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            uniqueElem[num]++;
        }

        if (uniqueElem.size() == 1) {
            cout << 0 << endl;
        } else {
            int answer = 0;
            for (auto x : uniqueElem) {
                if (x.second > answer) {
                    answer = x.second;
                }
            }

            cout << n - answer << endl;
        }
    }
    return 0;
}