// C++ - Chef Drinks Tea
// Rating - 591
// https://www.codechef.com/problems/TEA

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	   cin >> x >> y >> z;
	   int answer = 0;
	   while (x > 0) {
	       x-=y;
	       answer+=z;
	   }
	   cout << answer << endl;
	}
	return 0;
}