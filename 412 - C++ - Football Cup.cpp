// C++ - Football Cup
// Rating - 412
// https://www.codechef.com/submit/FOOTCUP

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        (x > 0 && x == y) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}