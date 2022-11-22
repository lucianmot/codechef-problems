// C++ - Best Discount
// Rating - 496
// https://www.codechef.com/problems/CHEAPFOOD

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        int discount = x / 10;
        discount > 100 ? cout << discount << endl : cout << 100 << endl;
    }
    return 0;
}