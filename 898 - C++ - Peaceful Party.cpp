// C++ - Peaceful Party
// Rating - 898
// https://www.codechef.com/problems/MAYOR_PARTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    a+=c;
	    if(a > b) cout << a << "\n";
	    else cout << b << "\n";
	}
	return 0;
}