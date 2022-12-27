// C++ - Mario and Transformation
// Rating - 649
// https://www.codechef.com/problems/TRANSFORM

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = n % 3;
	    if ( answer == 0 ) {
	        cout << "NORMAL" << endl;
	    } else if ( answer == 1) {
	        cout << "HUGE" << endl;
	    } else if ( answer == 2 ) {
	        cout << "SMALL" << endl;
	    }
	}
	return 0;
}