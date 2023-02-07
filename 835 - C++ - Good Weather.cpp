// C++ - Good Weather
// Rating - 835
// https://www.codechef.com/problems/GOODWEAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a1, a2, a3, a4, a5, a6, a7;
	cin >> t;
	while(t--) {
	    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
	    int weatherWeek[7] = {a1, a2, a3, a4, a5, a6, a7};
	    int sunnyDays = 0;
	    for (int x : weatherWeek) {
	        if ( x == 1 ) {
	            sunnyDays++;
	        }
	    }
	    if ( sunnyDays >= 4 ) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}