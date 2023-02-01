// C++ - 400M Race
// Rating - 548
// https://www.codechef.com/problems/RACE400M

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    if ( x < y && x < z ) cout << "ALICE" << "\n";
	    else if ( y < x && y < z ) cout << "BOB" << "\n";
	    else if ( z < x && z < y ) cout << "CHARLIE" << "\n";
	}
	return 0;
}