// C++ - Prime Factor Division
// Rating - ---
// https://www.codechef.com/START64D/problems/PRIMEFACDIV

// Only works for sample, TLE in submit

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        vector<int> primeNums;
        int addedTwo = 0;
        while (b % 2 == 0) {
            if (addedTwo == 0) {
                addedTwo = 1;
                primeNums.push_back(2);
            }
            b = b / 2;
        }
        for (int i = 3; i <= b; i += 2) {
            while (b % i == 0) {
                primeNums.push_back(i);
                b = b / i;
            }
        }
        int answer = 0;
        for (auto i : primeNums) {
            if (a % i != 0) {
                answer = 1;
            }
        }
        answer == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}