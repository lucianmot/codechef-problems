// C++ - Body Mass Index
// Rating - 845
// https://www.codechef.com/problems/BMI

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, m, h;
    cin >> t;
    while(t--) {
        cin >> m >> h;
        int bmi = m / (h * h);
        if (bmi <= 18) {
            cout << 1 << "\n";
        } else if (bmi >= 30) {
            cout << 4 << "\n";
        } else if (bmi >= 25) {
            cout << 3 << "\n";
        } else if (bmi >= 19) {
            cout << 2 << "\n";
        }
    }
	return 0;
}