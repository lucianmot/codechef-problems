// C++ - Read Pages
// Rating - 343
// https://www.codechef.com/problems/READPAGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> y;
	    if ( n <= x * y ) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}