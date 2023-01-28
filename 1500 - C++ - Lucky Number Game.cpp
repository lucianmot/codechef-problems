// C++ - Lucky Number Game
// Rating 1500
// https://www.codechef.com/problems/HP18

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t;
	long long num;
	cin >> t;
	    while (t--) {
	        int  n, a, b, ma = 0, mb = 0, mc = 0;
	        cin >> n >> a >> b;
	            while (n--) {
	                cin >> num;
	                if (num % a == 0) ma++;
	                if (num % b == 0) mb++;
	                if (num % a == 0 && num % b == 0 ) mc++;
	            }
	            if (mc > 0) ma++;
	            if (ma > mb) cout << "BOB" << "\n";
	            else cout << "ALICE" << "\n";
	    }
    return 0;
}