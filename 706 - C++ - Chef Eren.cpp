// C++ - Chef Eren
// Rating - 706
// https://www.codechef.com/problems/CHEFEREN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, b;
	cin >> t;
	while(t--) {
	    cin >> n >> a >> b;
	    int answer = 0;
	    if(n % 2 == 0) {
	        n=n/2;
	        answer = n * a + n * b;
	    } else {
	        n=n-1;
	        n=n/2;
	        answer = n * a + (n + 1) * b;
 	    }
 	    cout << answer << "\n";
	}
	return 0;
}