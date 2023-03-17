// C++ - The Lead Game
// Rating - 790
// https://www.codechef.com/problems/TLG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p1 = 0, p2 = 0, lead = 0, max_lead = 0, winner = 0;
    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;
        p1 += s1;
        p2 += s2;
        lead = abs(p1 - p2);
        if (lead > max_lead) {
            max_lead = lead;
            winner = (p1 > p2) ? 1 : 2;
        }
    }
    cout << winner << " " << max_lead << endl;
    return 0;
}