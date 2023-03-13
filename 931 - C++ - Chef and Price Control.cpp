// C++ - Chef and Price Control
// Rating - 931
// https://www.codechef.com/problems/PRICECON

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    int revenue = 0;
	    int priceCap = 0;
	    for(int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        revenue+=num;
	        if(num > k) priceCap+=k;
	        else priceCap+=num;
	    }
	    int answer = revenue - priceCap;
	    cout << answer << "\n";
	}
	return 0;
}