// C++ - Chairs Requirement
// Rating - 305
// https://www.codechef.com/submit/CHAIRS_

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int diff = x - y;
	    diff < 1 ? cout << 0 << endl : cout << diff << endl;
	}
	return 0;
}