// C++ - Largest and Second Largest
// Rating - 928
// https://www.codechef.com/problems/LARGESECOND

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int listNum[n];
	    for(int i = 0; i < n; i++) {
	        cin >> listNum[i];
	    }
	    sort(listNum, listNum + n);
	    int largestInt = listNum[n-1];
	    int secondLargestInt = 0;
	    if(largestInt == listNum[n-2]) {
	        // to be continued
	    }
	    int answer = largestInt + secondLargestInt;
	    cout << answer << "\n";
	}
	return 0;
}