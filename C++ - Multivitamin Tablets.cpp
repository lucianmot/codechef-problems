// C++ - Multivitamin Tablets
// Rating - ---
// https://www.codechef.com/START73D/problems/TABLETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x * 3 <= y ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}