// C++ - Packaging Cupcakes
// Rating - 1023
// https://www.codechef.com/submit/MUFFINS3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = n / 2 + 1;
	    cout << answer << endl;
	}
	return 0;
}