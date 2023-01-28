// C++ - Profit Increment
// Rating - 414
// https://www.codechef.com/problems/PROINC

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int answer = x + (x / 10) - (x - y);
	    cout << answer << "\n";
	}
	return 0;
}