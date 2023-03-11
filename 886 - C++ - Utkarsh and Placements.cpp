// C++ - Utkarsh and Placements tests
// Rating - 886
// https://www.codechef.com/problems/UTKPLC

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	char one, two, three, x, y;
	cin >> t;
	while(t--) {
	    cin >> one >> two >> three;
	    cin >> x >> y;
	    if(x == one) {
	        cout << x << "\n";
	    } else if (y == one) {
	        cout << y << "\n";
	    } else if (x == two) {
	        cout << x << "\n";
	    } else {
	        cout << y << "\n";
	    }
	}
	return 0;
}