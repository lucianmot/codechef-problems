// C++ - The Two Dishes
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/MAX_DIFF

#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int n, s;
	    cin >> n >> s;
	    if ( n < s) {
	        int pair = s - n;
	        int answer = n - pair;
	        cout << answer << endl;
	    } else {
	        cout << s << endl;
	    }
	}
	return 0;
}