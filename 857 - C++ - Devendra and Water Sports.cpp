// C++ - Devendra and Water Sports
// Rating - 859
// https://www.codechef.com/problems/DEVSPORTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, z, y, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> z >> y >> a >> b >> c;
	    int cost = y + a + b + c;
	    if ( z >= cost ) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}