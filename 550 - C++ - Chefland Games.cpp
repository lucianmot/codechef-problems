// C++ - Chefland Games
// Rating - 550
// https://www.codechef.com/problems/CHEFGAMES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, r1, r2, r3, r4;
	cin >> t;
	while(t--) {
	    cin >> r1 >> r2 >> r3 >> r4;
	    r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0 ? cout << "IN" << endl : cout << "OUT" << endl; 
	}
	return 0;
}