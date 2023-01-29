// C++ - RCB and PLayoffs
// Rating - 788
// https://www.codechef.com/problems/RCBPLAY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int answer = x + z * 2;
	    answer >= y ? cout << "YES" << "\n" : cout << "NO" << "\n";
	}
	return 0;
}