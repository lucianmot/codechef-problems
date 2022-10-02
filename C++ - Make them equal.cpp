// C++ - Make them equal
// Rating - ---
// https://www.codechef.com/LP1TO202/problems/MAKEEQUAL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int min = 1000000000;
	    int max = 0;
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        if ( num < min ) {
	            min = num;
	        }
	        if ( num > max ) {
	            max = num;
	        }
	    }
	    cout << max - min << endl;
	}
	return 0;
}