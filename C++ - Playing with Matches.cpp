// C++ - Playing with Matches
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/MATCHES

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    int matches[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (t--) {
        cin >> a >> b;
        int sumAB = a + b;
        int answer = 0;
        while (sumAB > 0) {
            answer = answer + matches[sumAB % 10];
            sumAB /= 10;
        }
        cout << answer << endl;
    }
    return 0;
}