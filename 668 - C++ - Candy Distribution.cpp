// C++ - Candy Distribution
// Rating - 668
// https://www.codechef.com/problems/CANDYDIST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    int answer = floor(n/m);
	    if (answer % 2 == 0 && answer * m == n) {
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	    }
	}
	return 0;
}