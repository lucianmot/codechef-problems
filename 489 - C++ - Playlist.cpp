// C++ - Playlist
// Rating - 489
// https://www.codechef.com/problems/SONGS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        cout << n / (3 * x) << endl;
    }
    return 0;
}