// C++ - Packing Books
// Rating - 775
// https://www.codechef.com/problems/BOOKPACK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int answer = ceil(y/float(z)) * x;
	    cout << answer << "\n";
	}
	return 0;
}