// C++ - Time Complexity
// Rating - ---
// https://www.codechef.com/NOV221D/problems/COMPLEXITY

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        a > b ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}