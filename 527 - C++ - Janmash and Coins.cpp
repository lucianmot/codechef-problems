// C++ - Janmash and Coins
// Rating - 527
// https://www.codechef.com/problems/JCOINS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    cout << x * 10 + (y * 5) << endl;
	}
	return 0;
}