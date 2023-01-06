// C++ - It is My Serve
// Rating - 691
// https://www.codechef.com/problems/MYSERVE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, p, q;
	cin >> t;
	while(t--) {
	    cin >> p >> q;
	    int sumPoints = (p + q) / 2;
	    sumPoints % 2 == 0 ? cout << "Alice" << endl : cout << "Bob" << endl;
	}
	return 0;
}