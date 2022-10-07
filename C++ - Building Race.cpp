// C++ - Building Race
// Rating - ---
// https://www.codechef.com/OCT221D/problems/BUILDINGRACE?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    float a, b, x, y;
	    cin >> a >> b >> x >> y;
	    float chefMinutes = a / x;
	    float chefinaMinutes = b / y;
	    if ( chefMinutes == chefinaMinutes ) {
	        cout << "Both" << endl;
	    } else if ( chefMinutes < chefinaMinutes ) {
	        cout << "Chef" << endl;
	    } else if ( chefMinutes > chefinaMinutes ) {
	        cout << "Chefina" << endl;
	    }
	}
	return 0;
}