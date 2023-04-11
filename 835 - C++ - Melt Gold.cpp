// C++ - Melt Gold
// Rating - 835
// https://www.codechef.com/problems/MELTGOLD

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int kiln = 0;
	    int answer = 0;
	    while(x > y) {
	        kiln+=1;
	        answer+=1;
	        y+=kiln;
	    }
	    cout << answer << "\n";
	}
	return 0;
}