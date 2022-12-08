// C++ - Expense List
// Rating - 719
// https://www.codechef.com/problems/EXPENSES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    int money = pow(2,x);
	    for (int i = 0; i < n; i++) {
	        money/=2;
	    }
	    cout << money << endl;
	}
	return 0;
}