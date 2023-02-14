// C++ - Summer Heat
// Rating - 852
// https://www.codechef.com/problems/COCONUT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, xa, xb, ya, yb;
	cin >> t;
	while(t--) {
	    cin >> xa >> xb >> ya >> yb;
	    cout << ya / xa + yb / xb << "\n";
	}
	return 0;
}