// C++ - Final Population
// Rating - 358
// https://www.codechef.com/submit/POPULATION

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    cout << x - y + z << endl;
	}
	return 0;
}