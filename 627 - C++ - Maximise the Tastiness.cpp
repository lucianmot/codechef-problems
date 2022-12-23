// C++ - Maximise the Tastiness
// Rating - 627
// https://www.codechef.com/problems/MAXTASTE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, d;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> d;
	    int x, y;
	    a > b ? x = a : x = b;
	    c > d ? y = c : y = d;
	    cout << x + y << endl;
	}
	return 0;
}