// C++ - Reach Home
// Rating - 395
// https://www.codechef.com/problems/REACH_HOME

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x*=5;
	    if(x >= y) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}