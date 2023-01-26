// C++ - Helping Chef
// Rating - 776
// https://www.codechef.com/problems/FLOW008

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    n < 10 ? cout << "Thanks for helping Chef!" << "\n" : cout << -1 << "\n";
	}
	return 0;
}