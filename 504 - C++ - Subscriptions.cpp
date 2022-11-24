// C++ - Subscriptions
// Rating - 504
// https://www.codechef.com/problems/SUBSCRIBE_

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int answer = ceil(n / 6.0);
        cout << answer * x << endl;
    }
    return 0;
}