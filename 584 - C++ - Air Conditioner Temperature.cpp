// C++ - Air Conditioner Temperature
// C++ - 584
// https://www.codechef.com/problems/ACTEMP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    a <= b && c <= b ? cout << "Yes" << endl : cout << "No" << endl;
	}
	return 0;
}