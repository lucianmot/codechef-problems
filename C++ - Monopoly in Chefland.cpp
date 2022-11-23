// C++ - Monopoly in Chefland
// Rating - ---
// https://www.codechef.com/START66D/problems/MONOPOLY

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, r1, r2, r3;
    cin >> t;
    while (t--) {
        cin >> r1 >> r2 >> r3;
        int aList[3] = {r1, r2, r3};
        sort(aList, aList + 3);
        aList[2] > aList[0] + aList[1] ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}