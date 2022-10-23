// C++ - Car Trip
// Rating - 374
// https://www.codechef.com/submit/CARTRIP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    x < 300 ? cout << 3000 << endl : cout << x * 10 << endl;
	}
	return 0;
}