// C++ - Racing Horses
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/HORSES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arrayus[n];
	    int answer = 9999999999;
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        arrayus[i] = num;
	    }
	    sort(arrayus, arrayus + n);
	    
	    for ( int j = 0; j < n - 1; j++ ) {
	        int tempAnswer = arrayus[j+1] - arrayus[j];
	        if ( tempAnswer < answer ) {
	            answer = tempAnswer;
	        }
	    }
	    cout << answer << endl;
	}
	return 0;
}