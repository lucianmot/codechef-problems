// C++ - Best of Two
// Rating - 284
// https://www.codechef.com/submit/BESTOFTWO

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        x > y ? cout << x << endl : cout << y << endl;
    }
}