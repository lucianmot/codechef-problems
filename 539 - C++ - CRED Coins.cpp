// C++ - CRED Coins
// Rating - 539
// https://www.codechef.com/problems/CREDCOINS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    cout << (x * y) / 100 << endl;
	}
	return 0;
}