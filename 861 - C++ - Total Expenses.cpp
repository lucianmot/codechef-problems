// C++ - Total Expenses
// Rating - 861
// https://www.codechef.com/problems/FLOW009

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, q, p;
	cin >> t;
	while(t--) {
	    cin >> q >> p;
	    double answer;
	    if(q > 1000) answer = (q * p) * 0.9;
	    else answer = q * p;
	    cout << fixed << setprecision(6) << answer << "\n";
	}
	return 0;
}