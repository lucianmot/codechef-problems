// C++ - Determine the Score
// Rating - 267
// https://www.codechef.com/submit/DETSCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, n;
	    cin >> x >> n;
	    cout << (x / 10) * n << endl;
	}
	return 0;
}