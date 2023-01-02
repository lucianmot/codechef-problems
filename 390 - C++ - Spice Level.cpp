// C++ - Spice Level
// Rating - 390
// https://www.codechef.com/problems/KITCHENSPICE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if ( x < 4 ) {
	        cout << "MILD" << endl;
	    } else if ( x < 7 ) {
	        cout << "MEDIUM" << endl;
	    } else if ( x >= 7 ) {
	        cout << "HOT" << endl;
	    } 
	}
	return 0;
}