// C++ - Minimum Number of Ones
// Rating - 604
// https://www.codechef.com/problems/MINNOO

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = 0;
	    for (int i = 0; i < n; i++) {
	        if (i % 2 != 0) {
	            answer++;
	        }
	    }
	    cout << answer << endl;
	}
	return 0;
}