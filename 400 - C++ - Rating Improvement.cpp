// C++ - Rating Improvement
// Rating - 400
// https://www.codechef.com/submit/ADVANCE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    y >= x && y <= x + 200 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}