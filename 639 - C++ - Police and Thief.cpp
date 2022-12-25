// C++ - Police and Thief
// Rating - 639
// https://www.codechef.com/problems/POLTHIEF

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if ( x == y ) {
	        cout << 0 << endl;
	    } else if (x > y) {
	        cout << x - y << endl;
	    } else if (x < y) {
	        cout << y - x << endl;
	    }
	}
	return 0;
}