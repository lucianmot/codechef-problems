// C++ - Chess Ratings
// Rating - 651
// https://www.codechef.com/problems/C_RATING

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if ( x == y ) {
	        cout << "0" << endl;
	    } else {
	        int answer = ceil((y - x) / 8.0);
	        cout << answer << endl;
	    }
	}
	return 0;
}