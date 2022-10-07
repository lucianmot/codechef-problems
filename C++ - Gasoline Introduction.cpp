// C++ - Gasoline Introduction
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/BEGGASOL

// Unresolved passes sample, fails submission

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int num;
	    cin >> num;
	    int gas = 0;
	    int distance = 0;
	    for ( int i = 0; i < num; i++ ) {
	        int more_gas;
	        cin >> more_gas;
	        if ( i == 0) {
	            gas = gas + more_gas;
	        } else {
	            gas = gas - 1 + more_gas;
	        }
	        if ( gas > 0 ) {
	            distance+=1;
	        }
	    }
	    if ( gas > 0 ) {
	        distance+=gas;
	        distance-=1;
	    }
	    cout << distance << endl;
	}
	return 0;
}