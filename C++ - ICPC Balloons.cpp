// C++ - ICPC Balloons
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/BALLOON?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int problemsList[n];
        int targetSum = 28;
        int sumSoFar = 0;
        for (int i = 0; i < n; i++)
            cin >> problemsList[i];
        int answer = 0;
        for (int j = 0; j < n; j++) {
            if (problemsList[j] <= 7) {
                sumSoFar += problemsList[j];
            }
            answer++;
            if (sumSoFar == targetSum) {
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}