// C++ - Roller Coaster
// Rating - 285
// https://www.codechef.com/submit/MINHEIGHT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, h;
	cin >> t;
	while(t--) {
	    cin >> x >> h;
	    x >= h ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}