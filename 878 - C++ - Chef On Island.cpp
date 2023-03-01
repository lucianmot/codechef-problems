// Chef On Island
// Rating - 878
// https://www.codechef.com/problems/CCISLAND

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	float x, y, xr, yr, d;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> xr >> yr >> d;
	    float food = x / xr;
	    float water = y / yr;
	    float answer = min(food, water);
	    if(answer >= d) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}