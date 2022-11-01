// C++ - Volume Control
// Rating - 409
// https://www.codechef.com/submit/VOLCONTROL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x,  y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    cout << abs(x-y) << endl;
	}
	return 0;
}