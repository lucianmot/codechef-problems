// C++ - Too many items
// Rating - 738
// https://www.codechef.com/problems/POLYBAGS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = ceil(n / 10.0);
	    cout << answer << "\n";
	}
	return 0;
}