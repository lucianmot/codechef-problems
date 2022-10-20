// C++ - How much scholarship
// Rating - 1012
// https://www.codechef.com/submit/ZCOSCH

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
	int r;
	cin >> r;
	if ( r <= 50 ) {
	    cout << "100" << endl;
	} else if ( r > 100 ) {
	    cout << "0" << endl;
	} else {
	    cout << "50" << endl;
	}
	return 0;
}