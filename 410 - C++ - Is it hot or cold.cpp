// C++ - Is it hot or cold
// Rating - 410
// https://www.codechef.com/submit/HOTCOLD

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, c;
    cin >> t;
    while (t--) {
        cin >> c;
        c > 20 ? cout << "HOT" << endl : cout << "COLD" << endl;
    }
    return 0;
}