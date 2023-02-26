// C++ - Relativity
// Ratings - 872
// https://www.codechef.com/problems/RELATIVE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, g, c;
	cin >> t;
	while(t--) {
	    cin >> g >> c;
	    int answer = (c * c) / (2 * g);
	    cout << answer << "\n";
	}
	return 0;
}