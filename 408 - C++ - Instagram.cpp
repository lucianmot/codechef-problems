// C++ - Instagram
// Rating - 408
// https://www.codechef.com/problems/INSTAGRAM

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x / y > 10.0 ? cout << "YES" << endl : cout << "NO" << endl;
	} 
	return 0;
}