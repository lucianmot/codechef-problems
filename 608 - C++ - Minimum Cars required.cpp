// C++ - Minimum Cars required
// Rating - 608
// https://www.codechef.com/problems/MINCARS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer;
	    n % 4 == 0 ? answer = n / 4 : answer = (n / 4) + 1;
	    cout << answer << endl;
	}
	return 0;
}