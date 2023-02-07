// C++ - Gross Salary
// Rating - 823
// https://www.codechef.com/problems/FLOW011

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t;
	float n, answer;
	cin >> t;
	while(t--) {
	    cin >> n;
	    if ( n >= 1500 ) {
	        answer = n + 500.00 + n * 0.98;
	    } else {
	        answer = n + n;
	    }
	    cout << fixed << setprecision(2) << answer << "\n";
	}
	return 0;
}