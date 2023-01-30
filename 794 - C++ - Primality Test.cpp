// C++ - Primality Test
// Rating - 794
// https://www.codechef.com/problems/PRB01

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    bool primeState = true;
	    
	    if (n == 0 || n == 1) {
	        primeState = false;
	    }
	    
	    for (int i = 2; i < n/2; i++) {
	        if ( n % i == 0) {
	            primeState = false;
	            break;
	        }
	    }
	    
	    primeState == true ? cout << "yes" << "\n" : cout << "no" << "\n";
	}
	return 0;
}