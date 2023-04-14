// C++ - IPL Ticket Rush
// Rating - 273
// https://www.codechef.com/problems/IPLTRSH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    if(n > m) cout << n - m << "\n";
	    else cout << 0 << "\n";
	}
	return 0;
}