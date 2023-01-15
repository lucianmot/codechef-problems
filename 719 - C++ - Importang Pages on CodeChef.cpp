// C++ - Important Pages on CodeChef
// Rating - 719
// https://www.codechef.com/problems/CHEFPAGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if ( a == 1 && b == 1 ) {
	    cout << "https://discuss.codechef.com" << "\n";
	} else if ( a == 1 && b == 0 ) {
	    cout << "https://www.codechef.com/contests" << "\n";
	} else {
	    cout << "https://www.codechef.com/practice" << "\n";
	}
	return 0;
}