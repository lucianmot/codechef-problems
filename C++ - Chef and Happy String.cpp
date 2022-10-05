// C++ - Chef and Happy String
// Rating - ---
// https://www.codechef.com/START59D/problems/HAPPYSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string word;
	    cin >> word;
	    int happyMeter = 0;
	    string answer = "Sad";
	    for ( int i = 0; i < word.length(); i++ ) {
	        if (( word[i] == 'a') || ( word[i] == 'e') || ( word[i] == 'i') ||  ( word[i] == 'o') ||  ( word[i] == 'u')) {
	            happyMeter+=1;
	        } else {
	            happyMeter = 0;
	        }
	        if ( happyMeter == 3 ) {
	            answer = "Happy";
	            break;
	        }
	    }
	    cout << answer << endl;
	}
	return 0;
}