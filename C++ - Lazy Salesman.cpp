// C++ - Lazy Salesman
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/HOLIDAYS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, w;
    cin >> t;
    while (t--) {
        cin >> n >> w;
        int earnings[n];
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            earnings[i] = num;
        }
        sort(earnings, earnings + n);
        int daysWorked = 0;
        int earnedSoFar = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (earnedSoFar < w) {
                earnedSoFar += earnings[j];
                daysWorked++;
                ;
            } else {
                break;
            }
        }
        cout << n - daysWorked << endl;
    }
    return 0;
}