// C++ - Air Hockey.cpp
// Rating - 366
// https://www.codechef.com/submit/AIRHOCKEY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    a > b ? cout << 7-a << endl : cout << 7-b << endl;
	}
	return 0;
}