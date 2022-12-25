// C++ - GCD and LCM
// Rating - 635
// https://www.codechef.com/problems/FLOW016

// Unsolved remains to be completed

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    int gcd = min(a, b);
	    while(gcd > 0) {
	        if (a % gcd == 0 && b % gcd == 0) {
	            break;
	        }
	        gcd--;
	    }
	    int lcm = (a * b) / gcd;
	    cout << gcd << " " << lcm << endl;
	}
	return 0;
}