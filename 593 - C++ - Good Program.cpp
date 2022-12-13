// C++ - Good Program
// Rating - 593
// https://www.codechef.com/problems/NIBBLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    n % 4 == 0 ? cout << "Good" << endl : cout << "Not Good" << endl;
	}
	return 0;
}