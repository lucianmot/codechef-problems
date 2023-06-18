// C++ - 7 Rings
// Rating - 568
// https://www.codechef.com/problems/SEVENRINGS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    int ans = n * x;
	    if(ans < 100000 && ans > 9999) cout << "Yes" << "\n";
	    else cout << "No" << "\n";
	}
	return 0;
}