// C++ - Too many Floors
// Rating - 717
// https://www.codechef.com/problems/FLOORS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int xFloor = ((x-1)/10)+1;
	    int yFloor = ((y-1)/10)+1;
	    int answer = abs(xFloor-yFloor);
	    cout << answer << "\n";
	}
	return 0;
}