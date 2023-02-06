// C++ - Maximum Production
// Rating - 833
// https://www.codechef.com/problems/EITA

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, d, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> d >> x >> y >> z;
	    int answer = max((x * 7), (y * d + z * (7 - d)));
	    cout << answer << "\n";
	}
	return 0;
}