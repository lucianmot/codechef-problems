// C++ - Minimum Pizzas
// Rating - ---
// https://www.codechef.com/OCT221D/problems/MINPIZZA

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    int totalSlices = n * x;
	    int answer = totalSlices / 4;
	    if ( totalSlices % 4 != 0 ) {
	        answer+=1;
	    }
	    cout << answer << endl;
	}
	return 0;
}