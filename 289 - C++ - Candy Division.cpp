// C++ - Candy Division
// Rating - 289
// https://www.codechef.com/problems/CANDIVIDE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    if(n % 3 == 0) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}