// C++ - Tom and Jerry Chase
// Rating - 298
// https://www.codechef.com/problems/JERRYCHASE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if ( x < y ) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}