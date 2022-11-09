// C++ - Distinct Colors
// Rating - ---
// https://www.codechef.com/START64D/problems/DISTINCTCOL

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int min = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num > min) {
                min = num;
            }
        }
        cout << min << endl;
    }
    return 0;
}