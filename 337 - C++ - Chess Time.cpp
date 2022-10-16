// C++ - Chess Time
// Rating - 337
// https://www.codechef.com/submit/CHESSTIME

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    cout << (n * 60) / 20 << endl;
	}
	return 0;
}