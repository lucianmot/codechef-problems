// C++ - Is the Score Consistent
// Rating - 572
// https://www.codechef.com/problems/TRUESCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, d;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> d;
	    a <= c && b <= d ? cout << "POSSIBLE" << endl : cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}