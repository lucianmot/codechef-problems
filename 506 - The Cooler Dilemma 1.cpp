// C++ - The Cooler Dilemma
// Rating - 506
// https://www.codechef.com/problems/WATERCOOLER1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, m, y;
    cin >> t;
    while (t--) {
        cin >> x >> m >> y;
        x* y < m ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}