// C++ - Single-use Attack
// Rating - 777
// https://www.codechef.com/problems/SINGLEUSE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, h, x, y;
	cin >> t;
	while(t--) {
	    cin >> h >> x >> y;
	    h-=y;
	    int answer = 1;
	    if(h > 0) {
	        answer+=(h/x);
	        if(h % x != 0) answer+=1; 
	    }
	    cout << answer << "\n";
	}
	return 0;
}