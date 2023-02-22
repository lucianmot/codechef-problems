// C++ - Good Turn
// Rating - 238
// https://www.codechef.com/problems/GDTURN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if(x + y > 6) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}