// C++ - Which Mixture
// Rating - 841
// https://www.codechef.com/problems/MIXTURE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    if(a > 0 && b > 0) cout << "Solution" << "\n";
	    else if(b == 0) cout << "Solid" << "\n";
	    else if(a == 0) cout << "Liquid" << "\n";
	}
	return 0;
}