// C++ - Maximise the Subsequence Sum
// Rating - 1308
// https://www.codechef.com/problems/SIGNFLIP

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    int arr[n];
	    for (int i = 0; i < n; ++i) cin >> arr[i];
	    
	    if (k > 0) {
    	    sort(arr, arr +n);
    	    
    	    for (int j = 0; j < k; ++j) {
    	        if (arr[j] >= 0) break;
    	        arr[j]*=-1;
    	    }
	    }
	    
	    int answer = 0;
	    for ( int x : arr ) {
	        if (x > 0) answer+=x;
	    }
	    cout << answer << "\n";
	}
	return 0;
}