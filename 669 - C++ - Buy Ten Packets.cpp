// C++ - Buy Ten Packets
// Rating - 669
// https://www.codechef.com/problems/TENPACKETS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x*=5;
	    y+=(y/2);
	    y*=2;
	    if(x < y) cout << x << "\n";
	    else cout << y << "\n";
	}
	return 0;
}