// C++ - Interior Design
// Rating - 373
// https://www.codechef.com/submit/INTRDSGN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z, w;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z >> w;
	    x + y < z + w ? cout << x + y << endl : cout << z + w << endl;
	}
	return 0;
}