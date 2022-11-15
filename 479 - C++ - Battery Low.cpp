// C++ - Battery Low
// Rating - 479
// https://www.codechef.com/problems/BATTERYLOW

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        x <= 15 ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}