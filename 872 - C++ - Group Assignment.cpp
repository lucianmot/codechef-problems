// C++ - Group Assignment
// Rating - 872
// https://www.codechef.com/problems/GROUPASSGN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    cout << 2 * n - x + 1 << "\n";
	}
	return 0;
}