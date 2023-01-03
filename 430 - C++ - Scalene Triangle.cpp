// C++ - Scalene Triangle
// Rating - 430
// https://www.codechef.com/problems/SCALENE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    a != b && a != c && b != c ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}