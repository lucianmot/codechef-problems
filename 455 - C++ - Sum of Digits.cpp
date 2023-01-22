// C++ - Sum of Digits
// Rating - 455
// https://www.codechef.com/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int sum = 0;
        while(n!=0) {
            int r = n % 10;
            sum+=r;
            n/=10;
        }
        cout << sum << "\n";
    }
    return 0;
}