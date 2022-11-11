// C++ - Maximize  the Minimum
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/MAXTHEMIN

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int arrayNum[n];
        for (int i = 0; i < n; i++) cin >> arrayNum[i];
        sort(arrayNum, arrayNum + n);
        k = min(k, n - 1);
        cout << arrayNum[k] << endl;
    }
    return 0;
}