// C++ - Parliament
// Rating - 419
// https://www.codechef.com/problems/PARLIAMENT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    int answer = n - x;
	    if(answer > x) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
	}
	return 0;
}