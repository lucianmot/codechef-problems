// C++ - Vacine Dates
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/VDATES

#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int d, l, r;
	    cin >> d >> l >> r;
	    if ( d < l) {
	        cout << "Too Early" << endl;
	    } else if (d > r) {
	        cout << "Too Late" << endl;
	    } else {
	        cout << "Take second dose now" << endl;
	    }
	}
	
	return 0;
}