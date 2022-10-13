// C++ - Suspense String
// Rating - 1239
// https://www.codechef.com/submit/SUSSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int num;
	    cin >> num;
	    string word;
	    cin >> word; 
	    string new_word;
	    for ( int i = 0; i < num; i++ ) {
	        if ( i % 2 == 0 ) {
	            char alicesChar = word[0];
	            if ( alicesChar == '1' ) {
	                new_word+=alicesChar;
	            } else {
	                new_word = alicesChar + new_word;
	            }
	            word.erase(0,1);
	        } else {
	            char bobsChar = word.back();
	            if ( bobsChar == '1' ) {
	                new_word = bobsChar + new_word;
	            } else {
	                new_word+=bobsChar;
	            }
	            word.pop_back();
	        }
	    }
	   cout << new_word << endl;
	}
	return 0;
}