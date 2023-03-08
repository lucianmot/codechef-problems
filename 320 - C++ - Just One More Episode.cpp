// C++ - Just One More Episode
// Rating - 320
// https://www.codechef.com/problems/ONEMORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if(x > 24) cout << "Yes" << "\n";
	    else cout << "No" << "\n";
	}
	return 0;
}