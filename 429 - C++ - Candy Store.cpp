// C++ - Candy Store
// Rating - 429
// https://www.codechef.com/problems/CANDYSTORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int answer;
	    if(y > x) answer = x + (y - x) * 2;
	    else answer = y;
	    cout << answer << "\n";
	}
	return 0;
}