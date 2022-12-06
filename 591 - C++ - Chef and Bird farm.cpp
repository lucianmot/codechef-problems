// C++ - Chef and Bird farm
// Rating - 591
// https://www.codechef.com/problems/BIRDFARM

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    if ( z % x == 0 && z % y == 0 ) {
	        cout << "ANY" << endl;
	    } else if ( z % x == 0 ) {
	        cout << "CHICKEN" << endl;
	    } else if ( z % y == 0 ) {
	        cout << "DUCK" << endl;
	    } else {
	        cout << "NONE" << endl;
	    }
	}
	return 0;
}