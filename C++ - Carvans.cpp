// C++ - Carvans
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/CARVANS?tab=statement

// Unresolved, works in sample fails on submit, no explanation why not working

#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--) {
	    long num;
	    cin >> num;
	    long previousCar;
	    cin >> previousCar;
	    long answer = 1;
	    for ( long i = 0; i < num - 1; i++ ) {
	        long currentCar;
	        cin >> currentCar;
	        if ( currentCar <= previousCar ) {
	            answer+=1;
	        }
	        previousCar = currentCar;
	    }
	    cout << answer << endl;
	}
	return 0;
}