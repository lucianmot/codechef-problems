// C++ - Simple Satistics
// Rating - ---
// https://www.codechef.com/LP1TO205/problems/SIMPSTAT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int bigList[n];
        for (int i = 0; i < n; i++)
            cin >> bigList[i];
        sort(bigList, bigList + n);

        double sum = 0;
        for (int j = k; j < (n - k); j++)
            sum += bigList[j];

        // This is my original solution not as good as current one

        // vector<int> bigList;
        // for (int i = 0; i < n; i++) {
        //     int num;
        //     cin >> num;
        //     bigList.push_back(num);
        // }
        // sort(bigList.begin(), bigList.end());
        // if (k > 0) {
        //     int temp = k;
        //     while(temp--) {
        //         bigList.pop_back();
        //         bigList.erase(bigList.begin());
        //     }
        // }
        // double sum = 0;
        // for ( auto x : bigList )
        //     sum+=x;

        double answer = sum / (n - 2 * k);
        cout << fixed << setprecision(6) << answer << endl;
    }
    return 0;
}
