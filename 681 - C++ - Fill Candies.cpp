// C++ - Fill Candies
// Rating - 681
// https://www.codechef.com/problems/FILLCANDIES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double n, k, m;
	cin >> t;
	while(t--) {
	    cin >> n >> k >> m;
	    int answer = ceil(n / (k * m));
	    cout << answer << endl;
	}
	return 0;
}