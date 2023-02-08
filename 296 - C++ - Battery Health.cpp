// C++ - Battery Health
// Rating - 296
// https://www.codechef.com/problems/BTRYHLTH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if (x > 79) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}