// C++ - Rain in Chefland
// Rating - 328
// https://www.codechef.com/problems/RAINFALL1

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if ( x < 3 ) {
	        cout << "LIGHT" << endl;
	    } else if ( x < 7 ) {
	        cout << "MODERATE" << endl;
	    } else if ( x >= 7 ) {
	        cout << "HEAVY" << endl;
	    }
	}
	return 0;
}