// C++ - Max minus Min
// Rating - 339
// https://www.codechef.com/problems/MAXDIFFMIN

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int aList[3] = {a, b, c};
        sort(aList, aList + 3);
        cout << aList[2] - aList[0] << endl;
    }
    return 0;
}