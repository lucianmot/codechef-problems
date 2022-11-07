// C++ - Chef and Masks
// Rating - 432
// https://www.codechef.com/submit/CMASKS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x * 10 < y ? cout << "Disposable" << endl : cout << "Cloth" << endl;
    }
    return 0;
}