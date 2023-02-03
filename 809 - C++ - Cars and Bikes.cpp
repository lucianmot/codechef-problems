// C++ - Cars and Bikes
// Rating - 809
// https://www.codechef.com/problems/TYRES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = n % 4;
	    if ( answer > 1 ) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}