// C++ - Dark Light
// Rating - 994
// https://www.codechef.com/problems/DARLIG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        // if k is 1, and n is 4, cout "On"
        if((k == 1 && n % 4 == 0) && (k == 0 && n % 4 != 0)) cout << "On" << "\n";
        else if(k == 0 && n % 4 == 0) cout << "Off" << "\n";
        // else cout "Ambiguous"
        else cout << "Ambiguous" << "\n";
    }
	return 0;
}