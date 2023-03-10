// C++ - Running Comparison
// Rating - 899
// https://www.codechef.com/problems/RUNCOMPARE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, answer;
	cin >> t;
	while(t--) {
	    cin >> n;
	    answer = 0;
	    int aliceArray[n];
	    for(int i = 0; i < n; i++) {
	        cin >> aliceArray[i];
	    }
	    for(int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        if((2 * num) < aliceArray[i] || num > (2 * aliceArray[i]));
	        else answer+=1;
	    }
	    cout << answer << "\n";
	}
	return 0;
}