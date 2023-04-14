// C++ - Can Chef
// Rating - 471
// https://www.codechef.com/problems/CANCHEF

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x*=15;
	    y+=y;
	    if(x < y) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
	}
	return 0;
}