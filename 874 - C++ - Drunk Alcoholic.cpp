// C++ - Drunk Alcoholic
// Rating - 874
// https://www.codechef.com/problems/DRUNKALK

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k;
	cin >> t;
	while(t--) {
	    cin >> k;
	    int answer = 0;
	    for(int i = 0; i < k; i++) {
	        if(i % 2 == 0) {
	            answer+=3;
	        } else {
	            answer-=1;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}