// C++ - Weight Balance
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/WEIGHTBL

// Unresolved, times out i suspect its because line 21 - 26 need to optimise that from loop to a simple divide
// probably modulus x2 take reminder see if modulus x1 == 0

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int w1, w2, 
	    x1, x2, m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    int fat = w2 - w1;
	    if (( fat == m * x1 ) || ( fat == m * x2 )) {
	        cout << "1" << endl;
	    } else {
        // problem might start here
	        for ( int i = 0; i < m; i++ ) {
	            if ( i % x2 == 0 ) {
	                fat-=x2;
	            } else {
	                fat-=x1;
	            }
	        }
        // problem might end here
	        if ( fat == 0 ) {
	            cout << "1" << endl;
	        } else {
	            cout << "0" << endl;
	        }
	    }
	}
	return 0;
}
