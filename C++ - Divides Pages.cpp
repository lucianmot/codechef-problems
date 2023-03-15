// C++ - Divides Pages
// Ratings - ---
// https://www.codechef.com/problems/BOOKPAGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int totalPages = 0;
	    for(int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        totalPages+=num;
	    }
	    if(n > 1 && totalPages % 2 == 0) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}