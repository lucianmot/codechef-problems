// C++ - Chef and Chocolates
// Rating - 405
// https://www.codechef.com/submit/CCHOCOLATES?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    cout << ( x * 5 + y * 10 ) / z << endl;
	}
	return 0;
}