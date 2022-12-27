// C++ - Mario and Bullet
// Rating - 650
// https://www.codechef.com/problems/BULLET

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int diff = y / x;
	    diff >= z ? cout << "0" << endl : cout << z - diff << endl;
	}
	return 0;
}