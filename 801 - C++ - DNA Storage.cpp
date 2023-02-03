// C++ - DNA Storage
// Rating - 801
// https://www.codechef.com/problems/DNASTORAGE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	while(t--) {
	    cin >> n;
	    cin >> s;
	    string answer = "";
	    for ( int i = 0; i < n; i+=2) {
	        string word = string() + s[i] + s[i+1];
	        if ( word == "00" ) {
	            answer+="A";
	        } else if ( word == "01" ) {
	            answer+="T";
	        } else if ( word == "10" ) {
	            answer+="C";
	        } else if ( word == "11" ) {
	            answer+="G";
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}