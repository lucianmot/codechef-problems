// C++ - Tax in Chefland
// Rating - 276
// https://www.codechef.com/submit/TAXES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    x > 100 ? cout << x - 10 << endl : cout << x << endl;
	}
	return 0;
}