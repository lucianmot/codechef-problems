// C++ - Richie Rich
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/CHFRICH

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int a, b, x;
	    cin >> a >> b >> x;
	    int diff = b - a;
	    int answer = ceil(diff/x);
	    cout << answer << endl;
	}
	return 0;
}