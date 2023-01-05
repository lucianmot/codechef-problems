// C++ - Sum it
// Rating - 308
// https://www.codechef.com/problems/SUMM

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    a + b == c ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}