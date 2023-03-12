// C++ - Say No To Drugs
// Rating - 1425
// https://www.codechef.com/problems/NODRUGS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, l, maxSpeed, friendSpeed;
	cin >> t;
	while(t--) {
	    cin >> n >> k >> l;
	    maxSpeed = 0;
	    for(int i = 0; i < n - 1; i++) {
	        int num;
	        cin >> num;
	        if(num > maxSpeed) maxSpeed = num;
	    }
	    cin >> friendSpeed;
	    if(k > 0) {
	        friendSpeed+=(l-1) * k;
	    }
	    if(friendSpeed > maxSpeed) cout << "Yes" << "\n";
	    else cout << "No" << "\n";
 	}
	return 0;
}