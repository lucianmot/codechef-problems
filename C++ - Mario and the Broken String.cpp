// C++ - Mario and the Broken String
// Rating - ---
// https://www.codechef.com/START64D/problems/BROKENSTRING

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int mid = n / 2;
        string word;
        cin >> word;
        string first = word.substr(0, mid);
        string second = word.substr(mid);
        first == second ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}