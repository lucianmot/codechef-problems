// C++ - The Smallest Pair
// Rating - ---
// https://www.codechef.com/LP1TO204/problems/SMPAIR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int num;
	    cin >> num;
	    int answer = 0;
	    for ( int i = num; i > 0; ) {
	        if ( i % 10  == 4 ) {
	            answer+=1;
	        }
	        i/=10;
	    }
	    cout << answer << endl;
	}
	return 0;
}