// C++ - Maximum Length Even Subarray
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/MXEVNSUB

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    if (n == 2) {
	        cout << 1 << endl;
	    } else {
    	    int sum;
    	    sum = n * ((n + 1.0) / 2.0);
    	    if ( sum % 2 == 0 ) {
    	        cout << n << endl;
    	    } else {
    	        cout << n -1 << endl;
    	    }
	    }
	}
	return 0;
}