// C++ - Olympics Ranking
// Rating - 893
// https://www.codechef.com/problems/OLYRANK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> x >> y >> z;
	    a+=(b + c);
	    x+=(y + z);
	    if(a > x) cout << 1 << "\n";
	    else cout << 2 << "\n";
	}
	return 0;
}