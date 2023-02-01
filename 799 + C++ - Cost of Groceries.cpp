// C++ - Cost of Groceries
// Rating - 799
// https://www.codechef.com/problems/KITCHENCOST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    int freshList[n];
	    int answer = 0;
	    for (int i = 0; i < n; ++i) {
	        cin >> freshList[i];
	    }
	    for (int j = 0; j < n; ++j) {
	        int num;
	        cin >> num;
	        if ( freshList[j] >= x ) {
	            answer+=num;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}