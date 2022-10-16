// C++ - Bidding
// Rating - 330
// https://www.codechef.com/submit/AUCTION

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    if ( a > b && a > c ) {
	        cout << "Alice" << endl;
	    } else if ( b > a && b > c ) {
	        cout << "Bob" << endl;
	    } else if ( c > b && c > a ) {
	        cout << "Charlie" << endl;
	    }
	}
	return 0;
}