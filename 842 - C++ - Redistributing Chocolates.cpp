// C++ - Redistributing Chocolates
// Rating - 842
// https://www.codechef.com/problems/REDSTRBTN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int elSum = x + y + z;
	    if ( elSum == 3 || elSum == 4 || elSum == 5 ) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
	}
	return 0;
}