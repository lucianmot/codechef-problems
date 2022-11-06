// C++ - Fill the Bucket
// Rating - 4werr19
// https://www.codechef.com/submit/FBC

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, k;
    cin >> t;
    while (t--) {
        cin >> x >> k;
        x - k > 0 ? cout << x - k << endl : cout << "0" << endl;
    }
    return 0;
}