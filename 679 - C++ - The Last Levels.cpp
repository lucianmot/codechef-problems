// C++ - The Last Levels
// Rating - 679
// https://www.codechef.com/problems/LASTLEVELS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int calculationX = floor(x / 3.0);
	    int videoGamesBreak = x % 3 == 0 ? calculationX - 1 : calculationX;
	    int answer = x * y + videoGamesBreak * z;
	    cout << answer << endl;
	}
	return 0;
}