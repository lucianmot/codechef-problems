// C++ - Chef and Candies
// Rating - 570
// https://www.codechef.com/problems/CHEFCAND

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    int diff = n - x;
	    if (diff <= 0) {
	        cout << 0 << endl;
	    } else {
	        int answer;
	        diff % 4 == 0 ? answer = diff / 4 : answer = (diff / 4) + 1;
	        cout << answer << endl;
	    }
	}
	return 0;
}