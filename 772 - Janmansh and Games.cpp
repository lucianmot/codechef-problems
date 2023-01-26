// C++ - Janmansh and Games
// Rating - 772
// https://www.codechef.com/problems/JGAMES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    (x + y) % 2 == 0 ? cout << "Janmansh" << "\n" : cout << "Jay" << "\n";
	}
	return 0;
}