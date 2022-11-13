// C++ - Course Registration
// Rating - 470
// https://www.codechef.com/problems/COURSEREG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        m - k >= n ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}