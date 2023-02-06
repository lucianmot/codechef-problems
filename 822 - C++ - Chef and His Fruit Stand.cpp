// C++ - Chef and His Fruit Stand
// Rating - 822
// https://www.codechef.com/problems/FRUITCHAAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    x/=2;
	    int answer = min(x, y);
	    cout << answer << "\n";
	}
	return 0;
}