// C++ - Luigi and Uniformity
// Rating - 1185
// https://www.codechef.com/START64D/problems/DIVIDEMAKEEQ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int theList[n];
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            theList[i] = num;
        }
        sort(theList, theList + n);
        int smallNum = theList[0];
        int notDiv = 1;
        for (int j = 1; j < n; j++) {
            if (theList[j] % smallNum != 0) {
                notDiv = 0;
            }
        }
        int answer = 0;
        if (notDiv == 1) {
            for (int k = 1; k < n; k++) {
                if (smallNum < theList[k]) {
                    answer++;
                }
            }
            cout << answer << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}