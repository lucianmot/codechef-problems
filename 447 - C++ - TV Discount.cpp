// C++ - TV Discount
// Rating - 447
// https://www.codechef.com/submit/TVDISC

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        int firstOpt = a - c;
        int secondOpt = b - d;
        if (firstOpt == secondOpt) {
            cout << "Any" << endl;
        } else if (firstOpt < secondOpt) {
            cout << "First" << endl;
        } else if (firstOpt > secondOpt) {
            cout << "Second" << endl;
        }
    }
    return 0;
}