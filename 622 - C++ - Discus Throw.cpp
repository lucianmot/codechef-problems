// C++ - Discus Throw
// Rating - 622
// https://www.codechef.com/problems/DISCUS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int bigList[3] = {a, b, c};
	    sort(bigList, bigList + 3);
	    cout << bigList[2] << endl;
	}
	return 0;
}