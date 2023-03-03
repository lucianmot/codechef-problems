// C++ - Chef on Vacation
// Rating - 891
// https://www.codechef.com/problems/CHEFVACATION

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    x+=y;
	    if(x > z) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
	}
	return 0;
}