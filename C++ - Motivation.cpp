// C++ - Motivation
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/IMDB

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int answer = 0;
        for (int i = 0; i < n; i++) {
            int s, r;
            cin >> s >> r;
            if (r > answer && s <= x) {
                answer = r;
            }
        }
        cout << answer << endl;
    }
    return 0;
}