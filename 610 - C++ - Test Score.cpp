// C++ - Test Score
// Rating - 610
// https://www.codechef.com/submit/CHEFSCORE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        (y % x == 0 & y % x <= n) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}