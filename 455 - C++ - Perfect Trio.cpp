// C++ - Perfect Trio
// Rating - 455
// https://www.codechef.com/problems/PERFECTTRIO

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int aList[3] = {a, b, c};
	    sort(aList, aList + 3);
	    aList[0] + aList[1] == aList[2] ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}