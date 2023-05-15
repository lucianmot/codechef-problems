// C++ - Online or Offline
// Rating - 713
// https://www.codechef.com/problems/FOODPLAN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    n*=0.9;
	    if(n==m) cout << "EITHER" << "\n";
	    else if(n < m) cout << "ONLINE" << "\n";
	    else if(n > m) cout << "DINING" << "\n";
	}
	return 0;
}