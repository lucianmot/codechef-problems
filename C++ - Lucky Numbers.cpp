// C++ - Lucky Numbers
// Rating - ---
// https://www.codechef.com/START73D/problems/LUCKYN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
 	    cin >> x;
	    int answer = 0;
	    while ( x > 6 ) {
	        int lastDigit = x % 10;
	        if (lastDigit == 7) {
	            answer = 1;
	            break;
	        }
	        x/=10;
	    }
	    answer == 1 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}