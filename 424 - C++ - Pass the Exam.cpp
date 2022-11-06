// C++ - Pass the Exam
// Rating - 424
// https://www.codechef.com/submit/PASSTHEEXAM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        ((a < 10 || b < 10 || c < 10) || (a + b + c < 100)) ? cout << "FAIL" << endl : cout << "PASS" << endl;
    }
    return 0;
}