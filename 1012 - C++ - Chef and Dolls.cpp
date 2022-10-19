// C++ - Chef and Dolls
// Rating - 1012
// https://www.codechef.com/submit/MISSP

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int allNums[n];
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        allNums[i] = num;
	    }
	    int answer = 0;
	    unordered_map<int, int> mp;
 
        for (int i = 0; i < n; i++)
            mp[allNums[i]]++;

        for (auto x : mp)
            if ( x.second % 2 == 1 ) {
                answer = x.first;
            }
        cout << answer << endl;
	}
	return 0;
}