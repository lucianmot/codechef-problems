// C++ - Reach fast
// Rating - ---
// https://www.codechef.com/DEC221D/problems/REACHFAST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, k;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> k;
	    int answer = ceil(abs(y - x) / float(k));
	    cout << answer << endl; 
	}
	return 0;
}