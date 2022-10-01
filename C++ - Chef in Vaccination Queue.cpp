// C++ - Chef in Vaccination Queue
// Rating - ---
// https://www.codechef.com/LP1TO202/problems/VACCINQ

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
    	int n, p, x, y;
    	cin >> n >> p >> x >> y;
    	int myVector[n];
    	int answer = 0;
    	for ( int i = 0; i < n; i++ ) {
            int tempVar;
            cin >> tempVar;
            myVector[i] = tempVar;
    	}
    	for ( int i = 0; i < p; i++ ) {
    	    if ( myVector[i] == 0 ) {
    	        answer+=x;
    	    } else {
    	        answer+=y;
    	    }
    	}
    	cout << answer << endl;
	}

	return 0;
}