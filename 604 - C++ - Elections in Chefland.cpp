// C++ - Elections in Chefland
// Rating - 604
// https://www.codechef.com/problems/ELECTN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while(t--) {
	    cin >> n >> x;
	    int answer = 0;
	    for(int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        if(num >= x) answer++;
	    }
	    cout << answer << "\n";
	}
	return 0;
}