// C++ - Waiting Time
// Rating - 319
// https://www.codechef.com/submit/WAITTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k, x;
	cin >> t;
	while(t--) {
	    cin >> k >> x;
	        cout << k * 7 - x << endl;
	}
	return 0;
}