// C++ - Chef and Profits
// Rating - 889
// https://www.codechef.com/problems/CHFPROFIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int answer = (z - y) * x;
	    cout << answer << "\n";
	}
	return 0;
}