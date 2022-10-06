// C++ - Pawri Meme
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/PAWRI

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    string word;
	    cin >> word;
	    word = regex_replace( word, regex("party"), "pawri" );
	    cout << word << endl;
	}
	return 0;
}