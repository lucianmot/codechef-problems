// C++ - Overspeeding Fine
// Rating - ---
// https://www.codechef.com/JAN231D/problems/FINE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if ( x <= 70 ) {
	        cout << 0 << "\n";
	    } else if ( x > 70 && x <= 100 ) {
	        cout << 500 << "\n";
	    } else if ( x > 100 ) {
	        cout << 2000 << "\n";
	    }
	}
	return 0;
}