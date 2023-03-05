// C++ - Avoid Contact
// Rating - 907
// https://www.codechef.com/problems/AVOIDCONTACT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int answer = y * 2 + x - y;
	    if(x == y) answer-=1;
	    cout << answer << "\n";
	}
	return 0;
}