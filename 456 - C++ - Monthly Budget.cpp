// C++ - Monthly Budget
// Rating - 456
// https://www.codechef.com/submit/BUDGET_

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x >= y * 30 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}