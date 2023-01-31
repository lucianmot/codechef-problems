// C++ - Degree of Polynomial
// Rating - 793
// https://www.codechef.com/problems/DPOLY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = 0;
	    for (int i = 0; i < n; ++i) {
	        int num;
	        cin >> num;
	        if (i != 0 && num != 0) {
	            answer = i;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}