// C++ - Nearest Exit
// Rating - 585
// https://www.codechef.com/problems/NEARESTEXIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    n >= 51 ? cout << "RIGHT" << endl : cout << "LEFT" << endl;
	}
	return 0;
}