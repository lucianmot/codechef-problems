// C++ - Highest Divisor
// Rating - 860
// https://www.codechef.com/problems/HDIVISR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i=10; i>=1; i--) {
	    if(n % i == 0) {
	        cout << i << "\n";
	        break;
	    }
	}
	return 0;
}