// C++ - Chef and NextGen
// Rating - 562
// https://www.codechef.com/problems/HELIUM3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, x, y;
    cin >> t;
    while(t--) {
        cin >> a >> b >> x >> y;
        a * b <= x * y ? cout << "Yes" << endl : cout << "No" << endl;
    }
	return 0;
}