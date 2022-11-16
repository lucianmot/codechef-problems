// C++ - Hackerman
// Rating - ---
// https://www.codechef.com/START65D/problems/PRIMEDICE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, sum;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        sum = a + b;
        bool isPrime = true;
        if (sum == 0 || sum == 1) {
            isPrime = false;
        } else if (sum >= 2) {
            for (int i = 2; i <= sum / 2; i++) {
                if (sum % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        isPrime == true ? cout << "Alice" << endl : cout << "Bob" << endl;
    }
    return 0;
}