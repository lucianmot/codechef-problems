// C++ - Small Factorial
// Rating - 648
// https://www.codechef.com/problems/FCTRL2

#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace std;
using namespace boost::multiprecision;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    cpp_int fact=1;
	    for(int i=n; i > 0; i--) fact*=i;
	    cout << fact << "\n"; 
	}
	return 0;
}