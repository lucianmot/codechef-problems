// C++ - Prajit and bits
// Rating - ---
// https://www.codechef.com/LP2TO305/problems/ADDI

#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	ll n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int count = 0;
	    while(n > 0) {
	        if ((n&1) == 0) {
	            count++;
	        }
	        n = n >> 1;
	    }
	    cout << count << endl;
	}
	return 0;
}