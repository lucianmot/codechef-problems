// C++ - Chef and the Wildcard Matching
// Rating - ---
// https://www.codechef.com/LP1TO203/problems/TWOSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string word01, word02;
	    cin >> word01;
	    cin >> word02;
	    int strLength = word01.length();
	    int answer = 0;
	    for (int i = 0; i < strLength; i++) {
	        if ( word01[i] == '?' || word02[i] == '?' ) {
	            continue;
	        } else if ( word01[i] == word02[i] ) {
	            continue;
	        } else {
	            answer = 1;
	            break;
	        }
	    }
	    answer == 0 ? cout << "Yes" << endl : cout << "No" << endl;
	}
	return 0;
}