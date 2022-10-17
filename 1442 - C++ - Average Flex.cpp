// C++ - Average Flex
// Rating - 1442
// https://www.codechef.com/problems/AVGFLEX

// Unresolved passes sample, fails submission

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
        cin >> n;
        int sum = 0;
        int numList[n];
        for ( int i = 0; i < n; i++ ) {
            int num;
            cin >> num;
            numList[i] = num;
            sum+=num;
        }
        double average = double(sum) / double(n);
        int answer = 0;
        for ( int j = 0; j < n; j++ ) {
            if ( double(numList[j]) >= average ) {
                answer+=1;
            }
        }
        cout << answer << endl;
	}
	return 0;
}