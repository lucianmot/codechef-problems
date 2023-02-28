// C++ - Gold Mining
// Rating - 880
// https://www.codechef.com/problems/CARRYGOLD

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> y;
	    int answer = (n + 1) * y;
	    if (answer >= x) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}