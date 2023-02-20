// C++ - Car Choice
// Rating - 861
// https://www.codechef.com/problems/CARCHOICE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x1, x2, y1, y2;
	cin >> t;
	while(t--) {
	    cin >> x1 >> x2 >> y1 >> y2;
	    double car1 = y1 / double(x1);
	    double car2 = y2 / double(x2);
	    if ( car1 == car2 ) {
	        cout << 0 << "\n";
	    } else if ( car1 < car2 ) {
	        cout << -1 << "\n";
	    } else if ( car1 > car2 ) {
	        cout << 1 << "\n";
	    }	        
	}
	return 0;
}