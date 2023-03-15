// C++ - Sunny Day
// Rating - ---
// https://www.codechef.com/problems/SUNNYDAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if(x > 24) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}