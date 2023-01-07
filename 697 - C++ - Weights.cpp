// C++ - Weights
// Rating - 697
// https://www.codechef.com/problems/WGHTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, w, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> w >> x >> y >> z;
	    if ( w == (x + y + z)) {
	        cout << "YES" << endl;
	    } else if ( w == (x + y) || w == (x + z) || w == (y + z) ) {
	        cout << "YES" << endl;
	    } else if ( w == x || w == y || w == z ) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}