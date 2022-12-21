// C++ - Jenga Night
// Rating - 613
// https://www.codechef.com/problems/JENGA

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    n <= x && x % n == 0 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}