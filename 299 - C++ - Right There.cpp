// C++ - Right There
// Rating - 299
// https://www.codechef.com/problems/RIGHTTHERE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    if(n <= x) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}