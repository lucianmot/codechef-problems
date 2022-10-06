// C++ - Chef and Linear Chess
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/LINCHESS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, k;
	    cin >> n >> k;
	    int answer = 999999999;
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        if ( k % num == 0 ) {
	            int tempAnswer = k / num;
	            if ( tempAnswer < answer ) {
	                answer = num;
	            }    
	        }
	    }
	    if ( answer != 999999999 ) {
	        cout << answer << endl;
	    } else {
	        cout << "-1" << endl;
	    }
	}
	return 0;
}