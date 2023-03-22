// C++ - Tekken
// Rating - 947
// https://www.codechef.com/problems/TEKKEN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int fight = max(b, c) - min(b, c);
	    if(a > fight) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}