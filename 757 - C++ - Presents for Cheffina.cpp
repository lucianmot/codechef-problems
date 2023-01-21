// C++ - Presents for Cheffina
// Rating - 757
// https://www.codechef.com/problems/PRESENTS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = n % 5 + (n / 5) * 4;
	    cout << answer << "\n";
	}
	return 0;
}