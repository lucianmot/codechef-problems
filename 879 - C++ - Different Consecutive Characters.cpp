// C++ - Different Consecutive Characters
// Rating - 879
// https://www.codechef.com/problems/DIFFCONSEC

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    string s;
	    cin >> s;
	    int answer = 0;
	    for (int i = 0; i < s.length(); i++) {
	        if (s[i] == s[i+1]) {
	            answer++;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}