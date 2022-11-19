// C++ - Chef and Chocolates
// Rating - 492
// https://www.codechef.com/problems/CHEFCHOCO

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, c, x, y;
    cin >> t;
    while (t--) {
        cin >> c >> x >> y;
        int sum = x;
        int answer = 0;
        while (c >= sum + 1) {
            sum += 1;
            answer += y;
        }
        cout << answer << endl;
    }
    return 0;
}
