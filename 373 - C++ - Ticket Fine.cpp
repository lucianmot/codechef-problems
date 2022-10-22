// C++ - Ticket Fine
// Rating - 373
// https://www.codechef.com/submit/TCKTFINE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, q, p;
	cin >> t;
	while(t--) {
	    cin >> x >> q >> p;
	    cout << (q - p) * x << endl;
	}
	return 0;
}