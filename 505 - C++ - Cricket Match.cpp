// C++ - Cricket Match
// Rating - 505
// https://www.codechef.com/problems/CRICMATCH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    int answer = 36 * m;
	    if(answer >= n) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}