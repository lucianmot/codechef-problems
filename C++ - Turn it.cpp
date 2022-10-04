// C++ - Turn it
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/NFS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        if ( v * v >= u * u - 2 * a * s ) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
	return 0;
}