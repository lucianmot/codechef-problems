// C++ - Gasoline Introduction
// Rating - 1263
// https://www.codechef.com/problems/BEGGASOL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int roadList[n];
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        roadList[i] = num;
	    }
	   int gas = roadList[0];
	   if ( gas == 0 ) {
	       cout << '0' << endl;
	   } else {
    	   int location = 1;
    	   for ( int j = 1; j < n; j++ ) {
    	       gas-=1;
    	       gas+=roadList[j];
    	       if ( gas > 0 ) {
    	           location = j;
    	       } else {
    	           location = j;
    	           break;
    	       }
    	   }
    	   if ( location == n - 1 ) {
    	       location+=gas;
    	   }
    	   cout << location << endl;
	   }
	}
	return 0;
}