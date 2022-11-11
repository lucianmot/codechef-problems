// C++ - Tom and Jerry 1
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/TANDJ1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, d, k;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d >> k;
        int dist = abs(b - d) + abs(a - c);
        (dist <= k && (k - dist) % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}