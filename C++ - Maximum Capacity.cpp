// C++ - Maximum Capacity
// Rating - ---
// https://www.codechef.com/problems/MAXCAP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int answer = x * y;
	    if(answer < 501 && x < 9) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	    
	}
	return 0;
}