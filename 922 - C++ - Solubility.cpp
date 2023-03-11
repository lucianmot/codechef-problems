// C++ - Solubility
// Rating - 922
// https://www.codechef.com/problems/SOLBLTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, a, b;
	cin >> t;
	while(t--) {
	    cin >> x >> a >> b;
	    int answer = (a + (100 - x) * b) * 10;
	    cout << answer << "\n";
	}
	return 0;
}