// C++ - Which Divison
// Rating - 867
// https://www.codechef.com/problems/WHICHDIV

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, r;
	cin >> t;
	while(t--) {
	    cin >> r;
	    if (r < 1600) cout << 3 << "\n";
	    else if (r < 2000) cout << 2 << "\n";
	    else if (r >= 2000) cout << 1 << "\n";
	}
	return 0;
}