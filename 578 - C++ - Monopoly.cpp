// C++ - Monopoly
// Rating - 578
// https://www.codechef.com/problems/MONOPOLY2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, p, q, r, s;
	cin >> t;
	while(t--) {
	    cin >> p >> q >> r >> s;
	    int sum = p + q + r + s;
	    if(p > sum - p) cout << "YES" << "\n";
	    else if(q > sum - q) cout << "YES" << "\n";
	    else if(r > sum - r) cout << "YES" << "\n";
	    else if(s > sum - s) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}