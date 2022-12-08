// C++ - Sasta Shark Tank
// Rating - 592
// https://www.codechef.com/problems/SST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    a = a * 10;
	    b = b * 5;
	    if ( a == b ) {
	        cout << "ANY" << endl;
	    } else if ( a > b ) {
	         cout << "FIRST" << endl;
	    } else if ( a < b ) {
	        cout << "SECOND" << endl;
	    }
	}
	return 0;
}