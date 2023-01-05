// C++ - X Jumps
// Rating - 686
// https://www.codechef.com/problems/XJUMP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int times = 0;
	    if ( y <= x && y > 1 ) {
	        times = x / y;
	    }
	    int answer =  times + (x - times * y) * 1;
	    cout << answer << endl;
	}
	return 0;
}