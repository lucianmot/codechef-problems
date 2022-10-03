// C++ - Two Dishes
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/TWODISH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int fed = n;
        for (int i = 0; i < n; i++) {
            if ( ( a > 0 ) && ( b > 0 )) {
                a-=1;
                b-=1;
                fed-=1;
            } else if ( ( b > 0 ) && ( c > 0 )) {
                b-=1;
                c-=1;
                fed-=1;
            } else {
                cout << "NO" << endl;
                break;
            }
        }
        if ( fed == 0 ) {
            cout << "YES" << endl;
        }
    }
	return 0;
}