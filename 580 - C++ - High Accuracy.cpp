// C++ - High Accuracy
// Rating - 580
// https://www.codechef.com/problems/ACCURACY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    if (n % 3 == 0) {
	        cout << "0" << endl;
	    } else {
	        int answer = 3 - (n % 3);
	        cout << answer << endl;
	    }
	}
	return 0;
}