// C++ - Make A and B equal
// Rating - 851
// https://www.codechef.com/problems/EQUALISE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    if (a < b) swap(a, b);
	    if (a % b != 0) {
	        cout << "NO" << "\n";
	    } else {
	        int x = a / b;
	        while(x % 2 == 0) {
	            x/=2;
	        }
	        if (x == 1) cout << "YES" << "\n";
	        else cout << "NO" << "\n";
	    } 
	}
	return 0;
}