// C++ - Carvans
// Rating - 1264
// https://www.codechef.com/problems/CARVANS

// Unresolved, works in sample fails on submit, no explanation why not working

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t;
	cin >> t;
	while(t--) {
	    ll num;
	    cin >> num;
	    ll previousCar;
	    cin >> previousCar;
	    ll answer = 1;
	    for ( ll i = 0; i < num - 1; i++ ) {
	        ll currentCar;
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