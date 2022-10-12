// C++ - Paper Cutting
// Rating - ---
// https://www.codechef.com/START60D/problems/CUTPAPER?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k, n;
	cin >> t;
	while(t--) {
	    cin >> k >> n;
	    if ( n == 1 ) {
	        cout << k * k << endl;
	    } else if ( k == n ) {
	        cout << 1 << endl;
	    } else {
	        int answer = k / n;
	        cout << answer * answer << endl;
	    }
	}
	return 0;
}