// C++ - Interesting Subarray
// Rating - 1375
// https://www.codechef.com/submit/SUBARRY?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int aList[n];
	    long minNum = 99999999999;
	    long maxNum = -99999999999;
	    for ( long i = 0; i < n; i++ ) {
	        long num;
	        cin >> num;
	        if ( num < minNum ) {
	            minNum = num;
	        }
	        if ( num > maxNum ) {
	            maxNum = num;
	        }
	    }
        long maxAnswer;
	    long minAnswer;
        if ( ( minNum >= 0 ) && ( maxNum > 0 )) {
            minAnswer = minNum * minNum;
            maxAnswer = maxNum * maxNum;
        } else if ( ( minNum < 0 ) && ( maxNum > 0 )) {
            minAnswer = minNum * maxNum;
            if (( minNum * -1 ) > maxNum ) {
                maxAnswer = minNum * minNum;
            } else {
                maxAnswer = maxNum * maxNum;
            }
        } else if ( ( minNum < 0) && ( maxNum < 0 )) {
            minAnswer = maxNum * maxNum;
            maxAnswer = minNum * minNum;
        }

	    cout << minAnswer << " " << maxAnswer << endl;
	}
	return 0;
}