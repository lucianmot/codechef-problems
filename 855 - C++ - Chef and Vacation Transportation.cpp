// C++ - Chef and Vacation Transportation
// Rating - 855
// https://www.codechef.com/problems/CHEFTRANS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    long long int d = x + y;
	    if(d == z) cout << "EQUAL" << "\n";
	    else if(d > z) cout << "TRAIN" << "\n";
	    else if(d < z) cout << "PLANEBUS" << "\n";
	}
	return 0;
}