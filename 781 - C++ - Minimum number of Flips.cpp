// C++ - Minimum number of Flips
// Rating - 781
// https://www.codechef.com/problems/MINFLIPS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int sum = 0;
	    for (int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        sum+=num;
	    }
	    sum = abs(sum);
	    if (n % 2 != 0) {
	        cout << -1 << "\n";
	    } else {
	        cout << sum / 2 << "\n";
	    }
	}
	return 0;
}