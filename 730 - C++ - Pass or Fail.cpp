// C++ - Pass or Fail
// Rating - 730
// https://www.codechef.com/problems/PASSORFAIL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, p;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> p;
	    x * 3 - (n - x) >= p ? cout << "PASS" << "\n" : cout << "FAIL" << "\n";
	}
	return 0;
}