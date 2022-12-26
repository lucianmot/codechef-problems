// C++ - Bath in Winters
// Rating - 643
// https://www.codechef.com/problems/BATH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    cout << x / (2 * y) << endl;
	}
	return 0;
}