// C++ - Binary Battles
// Rating -  ---
// https://www.codechef.com/START66D/problems/BIN_BAT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        int answer = 0;
        while (n > 1) {
            n /= 2;
            answer += x;
            if (n > 1) {
                answer += y;
            };
        }
        cout << answer << endl;
    }
    return 0;
}