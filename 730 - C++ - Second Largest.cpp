// C++ - Second Largest
// Rating - 730
// https://www.codechef.com/problems/FLOW017

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int smallList[3] = {a, b, c};
	    sort(smallList, smallList + 3);
	    cout << smallList[1] << "\n";
	}
	return 0;
}