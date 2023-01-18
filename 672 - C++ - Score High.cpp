// C++ - Score High
// Rating - 672
// https://www.codechef.com/problems/HIGHSCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, b, c, d;
	cin >> t;
	while(t--) {
	    cin >> n;
	    cin >> a >> b >> c >> d;
	    int aList[4] = {a, b, c, d};
	    sort(aList, aList + 4);
	    cout << aList[3] << "\n";
	}
	return 0;
}