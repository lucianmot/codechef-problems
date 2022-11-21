// C++ - Tasty Decisions
// Rating - 324
// https://www.codechef.com/problems/TASTEDEC

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x = x * 2;
        y = y * 5;
        if (x == y) {
            cout << "Either" << endl;
        } else if (x > y) {
            cout << "Chocolate" << endl;
        } else if (x < y) {
            cout << "Candy" << endl;
        }
    }
    return 0;
}