// C++ - Make AP
// Rating - 577
// https://www.codechef.com/problems/MAKEAP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, c;
	cin >> t;
	while(t--) {
	    cin >> a >> c;
	    int b = -1;
	    if ( a == c ) {
	        b = a;
	    } else if ( (c-a) % 2 == 0 ) {
	        b = a + (c-a) / 2;
	    }
	    cout << b << endl;
	}
	return 0;
}