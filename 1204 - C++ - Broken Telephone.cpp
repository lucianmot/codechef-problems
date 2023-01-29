// C++ - Broken Telephone
// Rating - 1204
// https://www.codechef.com/problems/BROKPHON

// added temp solution works for sample doesn't work for submit

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n, originalW;
	cin >> t;
	while(t--) {
	    cin >> n;
	    n--;
	    int answer = 0;
	    cin >> originalW;
	    bool brokenState = false;
	    for (int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
 	        if (num != originalW || brokenState == true) {
	            answer++;
	            brokenState = true;
	        }
	        if (brokenState == true && i == (n-1) && num == originalW) {
	            answer--;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}