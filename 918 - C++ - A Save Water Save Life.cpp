// C++ - A Save Water Save Life
// Rating - 918
// https://www.codechef.com/problems/SAVWATER

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, h, x, y, c;
	cin >> t;
	while(t--) {
	    cin >> h >> x >> y >> c;
	    int answer = (x + (y / 2)) * h;
	    if (answer > c) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
	}
	return 0;
}