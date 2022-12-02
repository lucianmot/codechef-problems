// C++ - Sugarcane Juice Business
// Rating - 563
// https://www.codechef.com/problems/SUGARCANE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    long aSum = 50 * n;
	    int answer = aSum * 0.3;
	    cout << answer << endl;
	}
	return 0;
}