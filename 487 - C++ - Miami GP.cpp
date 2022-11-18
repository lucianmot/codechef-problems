// C++ - Miami GP
// Rating - 487
// https://www.codechef.com/problems/F1RULE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x * 1.07 >= y ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}