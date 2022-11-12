// C++ - String Game
// Rating - ---
// https://www.codechef.com/NOV221D/problems/ABSTRING

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string word;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> word;
        if (n % 2 == 1) {
            cout << "NO" << endl;
        } else {
            unordered_map<char, int> wordMap;
            for (int i = 0; i < n; i++)
                wordMap[word[i]]++;

            int notEven = 0;
            for (auto x : wordMap) {
                if (x.second % 2 == 1) {
                    notEven = 1;
                    break;
                }
            }
            notEven == 0 ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
    return 0;
}