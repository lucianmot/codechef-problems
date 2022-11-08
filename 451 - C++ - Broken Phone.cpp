// C++ - Broken Phone
// Rating - 451
// https://www.codechef.com/submit/BROKENPHONE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (x == y) {
            cout << "ANY" << endl;
        } else if (x < y) {
            cout << "REPAIR" << endl;
        } else if (x > y) {
            cout << "NEW PHONE" << endl;
        }
    }
    return 0;
}