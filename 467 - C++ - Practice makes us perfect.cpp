// C++ - Practice makes us perfect
// Rating - 467
// https://www.codechef.com/problems/PRACTICEPERF

#include <bits/stdc++.h>
using namespace std;

int main() {
    int p = 4;
    int answer = 0;
    while (p--) {
        int num;
        cin >> num;
        if (num >= 10) {
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}