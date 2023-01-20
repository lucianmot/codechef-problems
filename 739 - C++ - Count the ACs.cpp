// C++ - Count the ACs
// Rating - 739
// https://www.codechef.com/problems/ACS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, p;
	cin >> t;
	while(t--) {
	    cin >> p;
	    int answer100 = p / 100;
	    p %= 100;
	    int answer1 = p;
	    
	    (answer100 + answer1) > 10 ? cout << -1 << "\n" : cout << answer100 + answer1 << "\n";
	}
	return 0;
}