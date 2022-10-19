// C++ - Math1 Enrolment
// Rating - 349
// https://www.codechef.com/submit/M1ENROL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    y - x <= 0 ? cout << "0" << endl : cout << y - x << endl;
	}
	return 0;
}