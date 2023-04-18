// C++ - Chef and Contest
// Rating - 872
// https://www.codechef.com/problems/CHEFCONTEST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, p, q;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> p >> q;
	    int chef = x + p * 10;
	    int chefina = y + q * 10;
	    if(chef == chefina) {
	        cout << "Draw" << "\n";
	    } else if(chef < chefina) {
	        cout << "Chef" << "\n";
	    } else if(chef > chefina) {
	        cout << "Chefina" << "\n";
	    }
	}
	return 0;
}