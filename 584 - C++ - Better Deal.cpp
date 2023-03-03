// C++ - Better Deal
// Rating - 584
// https://www.codechef.com/problems/BETDEAL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    a = 100 * (100 - a);
	    b = 200 * (100 - b);
	    if(a == b) {
	        cout << "BOTH" << "\n";
	    } else if(a < b) {
	        cout << "FIRST" << "\n";
	    } else if(a > b) {
	        cout << "SECOND" << "\n";
	    }
	}
	return 0;
}