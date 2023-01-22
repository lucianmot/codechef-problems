// C++ - Buy Lamps
// Rating - 775
// https://www.codechef.com/problems/BUYLAMP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, x, y;
	cin >> t;
	while(t--) {
	    cin >> n >> k >> x >> y;
	    int answer = 0;
	    if ( x <= y ) {
	        answer+= x * n;
	    } else {
	        answer+= x * k;
	        int m = n - k;
	        answer+= y * m;
	    }
	    cout << answer << "\n";
	}
	return 0;
}