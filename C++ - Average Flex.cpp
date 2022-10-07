// C++ - Average Flex
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/AVGFLEX

// Unresolved passes sample, fails submission

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int group[n];
	    int sum = 0;
	    for ( int i = 0; i < n; i++ ) {
	        int grade;
	        cin >> grade;
	        sum+=grade;
	        group[i] = grade;
	    }
	    int averageFlex = sum / n;
	    int boasts = 0;
	    for ( int j = 0; j < n ; j++ ) {
	        if ( group[j] >= averageFlex ) {
	            boasts+=1;
	        }
	    }
	    cout << boasts << endl;
	}
	return 0;
}