// C++ - GCD and LCM
// Rating - 635
// https://www.codechef.com/problems/FLOW016

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t;
	long long a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
		long long theGcd = __gcd(a, b);
 	    cout << theGcd << " " << (a*b)/theGcd << "\n";
	}
	return 0;
}