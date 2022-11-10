// C++ - Devu and friendship testing
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/CFRTEST

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        unordered_map<int, int> unMap;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            unMap[num]++;
        }

        cout << unMap.size() << endl;
    }
    return 0;
}