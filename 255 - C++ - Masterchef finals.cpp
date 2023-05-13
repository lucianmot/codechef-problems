// C++ - Masterchef finals
// Rating - 255
// https://www.codechef.com/problems/TOP10

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if(x < 11) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}