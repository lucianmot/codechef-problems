// C++ - Complete the credits
// Ratin - 809
// https://www.codechef.com/problems/CREDITS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if ( x > 65 ) {
	        cout << "Overload" << "\n";
	    } else if ( x < 35 ) {
	        cout << "Underload" << "\n";
	    } else {
	        cout << "Normal" << "\n";
	    }
	}
	return 0;
}