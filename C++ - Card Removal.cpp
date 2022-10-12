// C++ - Card Removal
// Rating - ---
// https://www.codechef.com/START60D/problems/REMOVECARDS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int aList[n];
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        aList[i] = num;
	    }
	    unordered_map<int, size_t> count; 
        for ( int i = 0; i < n; i++ ) {       
            count[aList[i]]++;
        }
        int maxMax = 0;
        for (auto &e:count) {
            if ( e.second > maxMax ) {
                maxMax = e.second;
            } 
        }
        cout << n - maxMax << endl;
	}
	return 0;
}