// C++ - Odd Sum Pair
// Rating - 506
// https://www.codechef.com/submit/ODDSUMPAIR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    if ( (a + b) % 2 == 1  || (a + c) % 2 == 1 || (b + c) % 2 == 1 ) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}