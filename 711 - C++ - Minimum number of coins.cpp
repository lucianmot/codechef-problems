// C++ - Mininum number of coins
// Rating - 711
// https://www.codechef.com/problems/MINCOINS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if ( x % 5 == 0 ) {
	        int c = round(float(x) / 10);
	        cout << c << endl;
	    } else {
	        cout << -1 << endl;
	    }
	}
	return 0;
}