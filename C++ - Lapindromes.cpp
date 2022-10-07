// C++ - Lapidromes
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/LAPIN

// Unresolved passes sample, fails submit

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	   string word;
	   cin >> word;
	   int wordSize = word.size();
	   string one;
	   string two;
	   if ( wordSize % 2 == 0 ) {
	       one = word.substr(0, wordSize/2);
	       two = word.substr(wordSize/2, wordSize);
	   } else {
	       one = word.substr(0, wordSize/2);
	       two = word.substr((wordSize/2)+1, wordSize);
	   }
	   string revTwo = string(two.rbegin(), two.rend());
	   if ( ( one == two ) || ( one == revTwo )) {
	       cout << "YES" << endl;
	   } else {
	       cout << "NO" << endl;
	   }
	}
	return 0;
}