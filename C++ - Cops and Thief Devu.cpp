// C++ - Cops and Thief Devu
// Rating - ---
// https://www.codechef.com/LP1TO202/problems/COPS

// Unresolved need to solve how to intersect cops searches

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int m, x, y;
	    cin >> m >> x >> y;
	    array<int, 100> houses;
	    houses.fill(0);
	    int answer;
	    for ( int i = 0; i < m; i++ ) {
	        int cop;
	        cin >> cop;
	        int cop_min = cop - (x * y);
	        if (cop_min < 0 ) {
	            cop_min = 0;
	        }
	        int cop_max = cop + (x * y);
	        if (cop_max > 100 ) {
	            cop_max = 100;
	        }
	        if (( cop_min = 0 ) && ( cop_max = 100 )) {
	            answer = 0;
	        } 
	    }
	}
	return 0;
}