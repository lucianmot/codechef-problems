// C++ - Equilizing Numbers
// Rating - 823
// https://www.codechef.com/problems/EQLZING

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    int answer = (a + b) % 2;
	    if ( answer == 0 ) cout << "Yes" << "\n";
	    else cout << "No" << "\n";
	}
	return 0;
}