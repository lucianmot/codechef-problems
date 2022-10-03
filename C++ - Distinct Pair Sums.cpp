// C++ - Distinct Pair Sums
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/MANYSUMS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int l, r;
	    cin >> l >> r;
	    if ( l == r ) {
	        cout << "1" << endl;
	    } else {
	        int answer;
	        answer = 2*(r-l)+1;
	        cout << answer << endl;
	    }
	} 
	return 0;
}