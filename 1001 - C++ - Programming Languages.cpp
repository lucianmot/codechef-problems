// C++ - Programming Languages
// Rating - 1001
// https://www.codechef.com/submit/PROGLANG

#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int a, b, a1, b1, a2, b2;
	    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
	    if (( a == a1 && b == b1 ) || ( a == b1 && b == a1 )) {
	        cout << "1" << endl;
	    } else if (( a == a2 && b == b2 ) || ( a == b2 && b == a2 )) {
	        cout << "2" << endl;
	    } else {
	        cout << "0" << endl;
 	    }
	}
	return 0;
}