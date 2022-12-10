// C++ - Good Investment or Not
// Ratin - ---
// https://www.codechef.com/DEC221D/problems/INVESTMENT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x >= y + y ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}