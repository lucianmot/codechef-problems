// C++ - Second Max of Three Numbers
// Rating - 300
// https://www.codechef.com/submit/SNDMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int theArray[3];
	while(t--) {
	    for ( int i = 0; i < 3; i++ ) {
	        int num;
	        cin >> num;
	        theArray[i] = num;
	    }
	    sort(theArray, theArray + 3);
	    cout << theArray[1] << endl;
	}
	return 0;
}