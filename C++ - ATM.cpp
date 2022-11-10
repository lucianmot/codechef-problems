// C++ - ATM
// Rating - ---
// https://www.codechef.com/LP0TO101/problems/HS08TEST

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a;
    float b;
    cin >> a >> b;
    float withdrawPlusFees = b - a - 0.5;

    if (a % 5 == 0 && withdrawPlusFees >= 0) {
        cout << fixed << withdrawPlusFees << endl;
    } else {
        cout << fixed << b << endl;
    }
    return 0;
}