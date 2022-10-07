// C++ - Valid Triangles
// Rating - ---
// https://www.codechef.com/LP0TO101/problems/FLOW013

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    if ( a + b + c == 180 ) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}