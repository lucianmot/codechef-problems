// C++ - Get Lowest Free
// Rating - 778
// https://www.codechef.com/problems/SALE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int smallList[3] = {a, b, c};
	    sort(smallList, smallList + 3);
	    cout << smallList[1] + smallList[2] << "\n";
	}
	return 0;
}