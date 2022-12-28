// C++ - Complementary Strand in a DNA
// Rating - 660
// https://www.codechef.com/problems/DNASTRAND

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    string word;
	    cin >> word;
	    for (int i = 0; i < n; i++) {
	        if (word[i] == 'A') {
	            word[i] = 'T';
	        } else if (word[i] == 'T') {
	            word[i] = 'A';
	        } else if (word[i] == 'C') {
	            word[i] = 'G';
	        } else if (word[i] == 'G') {
	            word[i] = 'C';
	        }
	    }
	    cout << word << endl;
	}
	return 0;
}