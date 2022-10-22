// C++ - Chef gives Party
// Rating - 363
// https://www.codechef.com/submit/PARTY2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, k;
    cin >> t;
    while(t--) {
        cin >> n >> x >> k;
        n * x <= k ? cout << "YES" << endl : cout << "NO" << endl;
    }
	return 0;
}