// C++ - Negative Product
// Rating - ---
// https://www.codechef.com/JAN231D/problems/NEGPROD

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    if ( (a * b) < 0 || (a * c) < 0 || (b * c) < 0 ) {
	        cout << "YES" << "\n";
	    } else {
	        cout << "NO" << "\n";
	    }
	}
	return 0;
}