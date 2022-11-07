// C++ - Expiring Bread
// Rating - 440
// https://www.codechef.com/submit/EXPIRY

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    float n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        n / k <= m ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}