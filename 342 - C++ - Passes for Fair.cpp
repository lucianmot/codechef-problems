// C++ - Passes for Fair
// Rating - 342
// https://www.codechef.com/problems/FAIRPASS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    n + 1 <= k ? cout << "YES" << endl : cout << "NO" << endl;
	} 
	return 0;
}