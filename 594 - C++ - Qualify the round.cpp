// C++ - Qualify the round
// Rating - 594
// https://www.codechef.com/problems/QUALIFY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, a, b;
	cin >> t;
	while(t--) {
	    cin >> x >> a >> b;
	    x <= a  + b * 2 ? cout << "Qualify" << endl : cout << "NotQualify" << endl;
	}
	return 0;
}