// C++ - Hoop Jump
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/HOOPS

#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int n;
	    cin >> n;
        if ( n % 2 == 0 ) {
            cout << n / 2 << endl;
        } else {
            int answer = n / 2;
            cout << answer + 1 << endl;
        }
	}
	return 0;
}
