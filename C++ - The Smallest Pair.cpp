// C++ - The Smallest Pair
// Rating - ---
// https://www.codechef.com/LP1TO204/problems/SMPAIR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        a[i] = num;
	    }
	    sort(a, a + n);
	    cout << a[0] + a[1] << endl;
	}
	return 0;
}