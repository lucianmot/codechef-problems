// C++ - Determine the Winner
// Rating - 626
// https://www.codechef.com/problems/WINNERR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> x >> y;
	    a > b ? c = a : c = b;
	    x > y ? z = x : z = y;
	    if ( c == z ) {
	        cout << "TIE" << endl;
	    } else if ( c > z ) {
	        cout << "Q" << endl;
	    } else if ( c < z ) {
	        cout << "P" << endl;
	    }
	}
	return 0;
}