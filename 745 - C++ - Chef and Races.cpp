// C++- Chef and Races
// Rating - 745
// https://www.codechef.com/problems/CHEFRACES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, a, b;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> a >> b;
	    int answer = 0;
	    if ( x != a && x != b )
	        answer++;
	    if ( y != a && y != b )
	        answer++;
	    cout << answer << "\n";
	}
	return 0;
}