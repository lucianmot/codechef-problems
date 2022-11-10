// C++ - Smallest Possible Whole Number
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/SMOL?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k > 0) {
            if (n >= k) {
                n = n % k;
            }
        }
        cout << n << endl;
    }
    return 0;
}