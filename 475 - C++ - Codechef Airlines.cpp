// C++ - Codechef Airlines
// Rating - 475
// https://www.codechef.com/problems/AIRLINES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int seats = min((10 * x), y);
	    cout << seats * z << "\n";
	}
	return 0;
}