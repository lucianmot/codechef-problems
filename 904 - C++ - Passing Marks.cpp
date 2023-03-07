// C++ - Passing Marks
// Rating - 904
// https://www.codechef.com/problems/PSGRADE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, aMin, bMin, cMin, tMin, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> aMin >> bMin >> cMin >> tMin >> a >> b >> c;
	    if(a < aMin || b < bMin || c < cMin || (a+b+c) < tMin) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
	}
	return 0;
}