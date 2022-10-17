// C++ - Problem Category
// Rating - 860
// https://www.codechef.com/problems/PROBCAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int score;
	    cin >> score;
	    if ( score < 100 ) {
	        cout << "Easy" << endl;
	    } else if ( score < 200 ) {
	        cout << "Medium" << endl;
	    } else {
	        cout << "Hard" << endl;
 	    }
	}
	return 0;
}