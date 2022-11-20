// C++ - Bob at the Bank
// Rating - 481
// https://www.codechef.com/problems/BOBBANK

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, w, x, y, z;
    cin >> t;
    while (t--) {
        cin >> w >> x >> y >> z;
        int answer = w;
        for (int i = 0; i < z; i++) {
            answer = answer + x - y;
        }
        cout << answer << endl;
    }
    return 0;
}