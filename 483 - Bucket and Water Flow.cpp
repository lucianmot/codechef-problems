// C++ - Bucket and Water Flow
// Rating - ---
// https://www.codechef.com/problems/WATERFLOW

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, w, x, y, z;
    cin >> t;
    while (t--) {
        cin >> w >> x >> y >> z;
        int targetBucket = w + y * z;
        if (x == targetBucket) {
            cout << "filled" << endl;
        } else if (x >= targetBucket) {
            cout << "unfilled" << endl;
        } else if (x <= targetBucket) {
            cout << "overflow" << endl;
        }
    }
    return 0;
}