// C++ - Enough Space
// Rating - 317
// https://www.codechef.com/submit/ENSPACE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> y;
	    n >= x + 2 * y ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}