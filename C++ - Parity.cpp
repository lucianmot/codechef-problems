// C++ - Parity
// Rating - ---
// https://www.codechef.com/START65D/problems/PAR2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        n % 2 == 0 ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}