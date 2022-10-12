// C++ - Palindrome Flipping
// Rating - ---
// https://www.codechef.com/START60D/problems/FLIPPAL?tab=statement

// unresolved, failing just one test

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    int zeros = 0;
	    int ones = 0;
	    cin >> n;
	    string word;
	    cin >> word;
	    for ( int i = 0; i < n; i++ ) {
	        if ( word[i] == '0' ) {
	            zeros++;
	        } else {
	            ones++;
	        }
	    }
	    int n_parity;
	    int zeros_parity;
	    int ones_parity;
	    if ( n % 2 == 0 ) {
	        n_parity = 0;
	    } else {
	        n_parity = 1;
	    }
	    if ( zeros % 2 == 0 ) {
	        zeros_parity = 0;
	    } else {
	        zeros_parity = 1;
	    }
	    if ( ones % 2 == 0 ) {
	        ones_parity = 0;
	    } else {
	        ones_parity = 1;
	    }
	    if ( n == 1 ) {
	        cout << "NO" << endl;
	    } else if (( n == 2 ) && ( zeros == 0 || ones == 0 )) {
	        cout << "YES" << endl;
	    } else if (( n_parity == 0 ) && ( zeros_parity == 0) && ( ones_parity == 0 )) {
	        cout << "YES" << endl;
	    } else if (( n_parity == 1) && (( zeros_parity == 0 ) || ( ones_parity == 0 ))) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	   // cout << "this is zeros: " << zeros << " this is ones: " << ones << endl;
	}
	return 0;
}