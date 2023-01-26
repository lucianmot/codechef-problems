// C++ - Speed Limit Test
// Rating - 718
// https://www.codechef.com/problems/SPEEDTEST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	float a, x, b, y;
	cin >> t;
	while(t--) {
	    cin >> a >> x >> b >> y;
	    float alice = a / x;
	    float bob = b / y;
	    if ( alice == bob ) {
	        cout << "Equal" << endl;
	    } else if ( alice > bob ) {
	        cout << "Alice" << endl;
	    } else if ( alice < bob ) {
	        cout << "Bob" << endl;
	    }
	}
	return 0;
}