// C++ - Test Averages
// Rating - 558
// https://www.codechef.com/problems/TESTAVG

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    (a+b)/2 < 35 || (a+c)/2 < 35 || (b+c)/2 < 35 ? cout << "fail" << endl : cout << "pass" << endl;
	}
	return 0;
}