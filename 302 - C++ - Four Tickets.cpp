// C++ - Four Tickets
// Rating - 302
// https://www.codechef.com/problems/FOURTICKETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
        n*=4;
        if (n <= 1000) cout << "YES" << "\n";
        else cout << "NO" << "\n";
	}
	return 0;
}