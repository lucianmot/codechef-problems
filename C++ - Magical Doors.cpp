// C++ - Magical Doors
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/MAGDOORS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string word;
	    cin >> word;
	    int wand = 0;
	    for ( int i = 0; i < word.size(); i++ ) {
	        if ( ( word[i] == '0' ) && ( wand % 2 == 0 )) {
	            wand+=1;
	        } else if ( ( word[i] == '1' ) && ( wand % 2 == 1 )) {
	            wand+=1;
	        }
	    }
	    cout << wand << endl;
	}
	
	return 0;
}