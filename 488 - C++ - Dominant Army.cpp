// C++ - Dominant Army
// Rating - 488
// https://www.codechef.com/problems/DOMINANT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int armies[3];
        for (int i = 0; i < 3; i++) {
            cin >> armies[i];
        }
        sort(armies, armies + 3);
        armies[0] + armies[1] < armies[2] ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}