// C++ - A or B
// Rating - 728
// https://www.codechef.com/problems/AORB

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int answer = 1500 - x * 2 - (x + y) * 4;
	    int answer2 = 1500 - (x + y) * 2 - y * 4;
	    answer > answer2 ? cout << answer << "\n" : cout << answer2 << "\n";
	}
	return 0;
}