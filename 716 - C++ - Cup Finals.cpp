// C++ - Cup Finals
// Rating - 716
// https://www.codechef.com/problems/CRICUP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, d;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> d;
	    abs(x - y) <= d ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}