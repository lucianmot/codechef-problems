// C++ - ATM Machine
// Rating - 1001
// https://www.codechef.com/submit/ATM2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    string answer;
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        if ( num <= k ) {
	            answer+='1';
	            k-=num;
	        } else {
	            answer+='0';
	        }
	    }
	    cout << answer << endl;
	}
	return 0;
}