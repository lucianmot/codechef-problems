// C++ - Ezio and Guards
// Rating - 427
// https://www.codechef.com/submit/MANIPULATE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x >= y ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}