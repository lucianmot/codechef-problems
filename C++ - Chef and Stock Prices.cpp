// C++ - Chef and Stock Prices
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/CSTOCK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int s, a, b, c;
	    cin >> s >> a >> b >> c;
	    float change = c / 100.0;
	    float new_price = s * (1.0 + change);
	    if ( ( new_price >= a) && ( new_price <= b )) {
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	    }
	}
	return 0;
}