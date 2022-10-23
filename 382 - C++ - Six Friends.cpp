// C++ - Six Friends
// Rating - 382
// https://www.codechef.com/submit/SIXFRIENDS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x * 3 < y * 2 ? cout << x * 3 << endl : cout << y * 2 << endl;
	}
	return 0;
}