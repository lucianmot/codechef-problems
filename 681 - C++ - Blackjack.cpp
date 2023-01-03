// C++ - Blackjack
// Rating - 681
// https://www.codechef.com/problems/BLACKJACK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    int c = 21 - (a + b);
	    c > 0 && c < 11 ? cout << c << endl : cout << -1 << endl;
	}
	return 0;
}