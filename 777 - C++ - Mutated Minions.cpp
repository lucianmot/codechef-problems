// C++ - Mutated Minions
// Rating - 777
// https://www.codechef.com/problems/CHN15A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    int answer = 0;
	    for (int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        num+=k;
	        if (num % 7 == 0) {
	            answer++;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}