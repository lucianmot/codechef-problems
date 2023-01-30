// C++ - Lazy Chef
// Rating - 801
// https://www.codechef.com/problems/LAZYCHF

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, m, d;
	cin >> t;
	while(t--) {
	    cin >> x >> m >> d;
	    int a1 = x * m;
	    int a2 = x + d;
	    int answer = min(a1, a2);
	    cout << answer << "\n";
	}
	return 0;
}