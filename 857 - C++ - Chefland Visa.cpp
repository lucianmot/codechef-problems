// C++ - Chefland Visa
// Rating - 857
// https://www.codechef.com/problems/VISA

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x1, x2, y1, y2, z1, z2;
	cin >> t;
	while(t--) {
	    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
	    if((x1 <= x2) && (y1 <= y2) && (z1 >= z2)) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}