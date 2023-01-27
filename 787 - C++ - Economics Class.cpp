// C++ - Economics Class
// Rating - 787
// https://www.codechef.com/problems/ECOCLASS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int supplyList[n];
	    int answer = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> supplyList[i];
	    }
	    
	    for (int j = 0; j < n; j++) {
	        int num;
	        cin >> num;
	        if (num == supplyList[j]) {
	            answer++;
	        }
	    }
	    
	    cout << answer << "\n";
	}
	return 0;
}