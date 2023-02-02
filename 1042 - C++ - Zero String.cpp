// C++ - Zero String
// Rating - 1042
// https://www.codechef.com/problems/ZEROSTRING

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, ones;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        ones = count(s.begin(), s.end(), '1');
        cout << min(ones, (n - ones + 1)) << "\n";
    }
    return 0;
}