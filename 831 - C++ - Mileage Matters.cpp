// C++ - Mileage Matters
// Rating - 831
// https://www.codechef.com/problems/MILEAGE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, y, a, b;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> y >> a >> b;
	    float petrol = (n / float(a)) * x;
	    float diesel = (n / float(b)) * y;
	    if ( petrol == diesel ) cout << "ANY" << "\n";
	    else if ( petrol < diesel ) cout << "PETROL" << "\n";
	    else if ( petrol > diesel ) cout << "DIESEL" << "\n";
	}
	return 0;
}