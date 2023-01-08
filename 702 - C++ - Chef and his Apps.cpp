// C++ - Chef and his Apps
// Rating - 702
// https://www.codechef.com/problems/CHEFAPPS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s, x, y, z;
    cin >> t;
    while(t--) {
        cin >> s >> x >> y >> z;
        int remainingStorage = s - (x + y);
        if ( z <= remainingStorage ) {
            cout << 0 << endl;
        } else if ( z > remainingStorage && (z <= (x + remainingStorage) || z <= (y + remainingStorage))) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
	return 0;
}