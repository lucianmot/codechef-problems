// C++ - Self Defense Training
// Rating - 716
// https://www.codechef.com/problems/SELFDEF

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = 0;
	    for (int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        if (num > 9 && num < 61) {
	            answer++;
	        }
	    }
	    cout << answer << endl;
	}
	return 0;
}