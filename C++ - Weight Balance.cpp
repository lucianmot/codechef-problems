// C++ - Weight Balance
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/WEIGHTBL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int w1, w2, x1, x2, m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    int fat = w2 - w1;
	    float fatPerMonth = float(fat) / float(m);
	    if ( ( fatPerMonth > x2 ) || ( fatPerMonth < x1 )) {
	        cout << 0 << endl;
	    } else {
	        cout << 1 << endl;
	    }
	}
	return 0;
}