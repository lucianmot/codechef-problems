// C++ - Greater Average
// Rating - 500
// https://www.codechef.com/problems/AVGPROBLEM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        (a + b) / 2.0 > double(c) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}