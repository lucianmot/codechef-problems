// C++ - Smallest Possible Whole Number
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/SMOL?tab=statement

// Unsolved - Sample passes, runtime error on submit code

#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int n, k;
	    cin >> n >> k;
	    if ( n == k ) {
	        cout << 0 << endl;
	    } else if ( n < k ) {
	        cout << n << endl;
	    } else {
	        int answer = n % k;
	        cout << answer << endl;
	    }
	}
	return 0;
}
