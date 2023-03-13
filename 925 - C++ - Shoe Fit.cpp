// C++ - Shoe Fit
// Rating - 925
// https://www.codechef.com/problems/SHOEFIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int answer = a + b + c;
	    if(answer < 1 || answer > 2) cout << 0 << "\n";
	    else cout << 1 << "\n";
	}
	return 0;
}