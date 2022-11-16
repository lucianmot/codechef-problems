// C++ - Split and Maximize
// Rating - 1313
// https://www.codechef.com/problems/SPLITMAX

// couldn't get this to work even while reading setter solution, had to copy a accepted solution from submission, the shame

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 998244353;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, num, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            sum += num;
            sum %= mod;
        }
        cout << (sum * (sum - 1)) % mod << endl;
    }
    return 0;
}