// C++ - Equal Distribution
// Rating - 330
// https://www.codechef.com/submit/EQUALDIST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    ( a + b ) % 2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}