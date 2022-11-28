// C++ - Sale Season
// Rating - 541
// https://www.codechef.com/problems/SALESEASON

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if (x <= 100) {
	        cout << x << endl;
	    } else if (x <= 1000) {
	        cout << x - 25 << endl;
	    } else if (x <= 5000) {
	        cout << x - 100 << endl;
	    } else if (x > 5000) {
	        cout << x - 500 << endl;
	    };
	}
	return 0;
}