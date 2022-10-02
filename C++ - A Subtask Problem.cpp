// C++ - A Subtask Problem
// Rating - ---
// https://www.codechef.com/LP1TO202/problems/SUBTASK

// Unsolved yet, gonna finish after coming back from bath

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, m, k;
	    cin >> n >> m >> k;
	    int answer = 0;
	    int zero = -1;
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        if (( num == 0 ) && ( zero == -1 )) {
	            zero = i;
	        }
	    }
	    if ( zero == -1 ) {
	        answer = 100;
	    } else if ( zero >= m ) {
	        answer = k;
	    }
	    cout << answer << endl;
	}
	return 0;
}