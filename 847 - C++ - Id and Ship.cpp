// C++ - Id and Ship
// Rating - 847
// https://www.codechef.com/problems/FLOW010

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    char id;
	    cin >> id;
	    if ( ( id == 'b' ) || ( id == 'B' )) {
	        cout << "BattleShip" << endl;
	    } else if ( ( id == 'c' ) || ( id == 'C' )) {
	        cout << "Cruiser" << endl;
	    } else if ( ( id == 'd' ) || ( id == 'D' )) {
	        cout << "Destroyer" << endl;
	    } else if ( ( id == 'f' ) || ( id == 'F' )) {
	        cout << "Frigate" << endl;
	    }
	}
	return 0; 
}