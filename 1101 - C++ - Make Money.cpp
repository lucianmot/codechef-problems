// C++ - Make Money
// Rating - 1101
// https://www.codechef.com/problems/MAKEMONEY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, c;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> c;
	    int profit = x - c;
	    int answer = 0;
	    for (int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        if (num < profit) {
	            answer+=profit;
	        } else {
	            answer+=num;
	        }
	    }
	    cout << answer << endl;
	}
	return 0;
}