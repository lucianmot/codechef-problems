// C++ - Chef and Wire Frames
// Rating - 383
// https://www.codechef.com/submit/CWIREFRAME?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, x;
	cin >> t;
	while(t--) {
	    cin >> n >> m >> x;
	    cout << (2 * n + 2 * m) * x << endl;
	}
	return 0;
}