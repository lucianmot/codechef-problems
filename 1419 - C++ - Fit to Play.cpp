// C++ - Fit to Play
// Rating - 1419
// https://www.codechef.com/problems/PLAYFIT

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int practiceList[n];
	    int answer = 0;
	    for (int i = 0; i < n; ++i) cin >> practiceList[i];
	    int min_goals = practiceList[0];
        int max_diff = 0;
        for (int i = 1; i < n; i++) {
            max_diff = max(max_diff, practiceList[i] - min_goals);
            min_goals = min(min_goals, practiceList[i]);
        }
        if (max_diff <= 0) cout << "UNFIT" << endl;
        else cout << max_diff << endl;
	}
 	return 0;
}