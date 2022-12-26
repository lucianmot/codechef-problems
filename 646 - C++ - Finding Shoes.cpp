// C++ - Finding Shoes
// Rating - 646
// https://www.codechef.com/problems/FINDSHOES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    int p = n > m ? n - m : 0;
	    cout << n + p << endl;
	}
	return 0;
}