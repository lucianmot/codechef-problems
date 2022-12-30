// C++ - Change Row and Column Both
// Rating - 660
// https://www.codechef.com/problems/CHANGEPOS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, d;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> d;
	    a != c && b != d ? cout << 1 << endl : cout << 2 << endl;
	}
	return 0;
}