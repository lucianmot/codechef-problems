// C++ - Just Like Mob!
// Rating - ---
// https://www.codechef.com/START66D/problems/MOBKUN

// Unresolved passes sample dies in submission

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    long long x;
    cin >> t;
    while (t--) {
        cout << "This is a new case" << endl;
        cout << "-------------------" << endl;
        cin >> n >> m >> k >> x;
        int counter = 0;
        while (x > 0) {
            counter++;
            // cout << "this is x: " << x << endl;
            // cout << "this is year: " << counter << endl;
            if (counter >= k && counter % k == 0) {
                x -= (n + m);
            } else {
                x -= n;
            };
        }
        counter % k == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}