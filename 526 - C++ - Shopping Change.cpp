// C++ - Shopping Change
// Rating - 526
// https://www.codechef.com/submit/SHOPCHANGE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    100 - x < 0 ? cout << 0 << endl : cout << 100 - x << endl;
	}
	return 0;
}