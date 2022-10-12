// C++ - Palindrome Flipping
// Rating - ---
// https://www.codechef.com/START60D/problems/FLIPPAL?tab=statement

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
	    if (( zeros % 2 == 1) && ( ones % 2 == 1 )) {
	        cout << "NO" << endl;
	    } else {
	        cout << "YES" << endl;
	    }
	}
	return 0;
}