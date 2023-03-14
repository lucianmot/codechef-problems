// C++ - Hidden Numbers
// Rating - 917
// https://www.codechef.com/problems/UWCOI21A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    if(n % 2 == 0) cout << "2 " << n / 2 << "\n";
	    else if(n % 3 == 0) cout << "3 " << n / 3 << "\n";
	    else cout << "1 " << n << "\n";
	}
	return 0;
}