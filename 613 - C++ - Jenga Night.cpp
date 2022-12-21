// C++ - Jenga Night
// Rating - 613
// https://www.codechef.com/problems/JENGA

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    n <= x ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}