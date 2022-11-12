// C++ - Water Mixing
// Rating - ---
// https://www.codechef.com/NOV221D/problems/WTRMIXING

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, x, y;
    cin >> t;
    while (t--) {
        cin >> a >> b >> x >> y;
        if (a == b) {
            cout << "YES" << endl;
        } else if (a > b) {
            a - b <= y ? cout << "YES" << endl : cout << "NO" << endl;
        } else if (a < b) {
            b - a <= x ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
    return 0;
}