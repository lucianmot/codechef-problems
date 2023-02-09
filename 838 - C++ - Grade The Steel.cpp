// C++ - Grade The Steel
// Rating - 838
// https://www.codechef.com/problems/FLOW014

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, hardness, tensileStr;
	float carbon;
	cin >> t;
	while(t--) {
	    cin >> hardness >> carbon >> tensileStr;
	    int hardnessCheck = 0,carbonCheck = 0, tensileStrCheck = 0;
	    if ( hardness > 50 ) hardnessCheck = 1;
	    if ( carbon < 0.7 ) carbonCheck = 1;
	    if ( tensileStr > 5600 ) tensileStrCheck = 1;
	    if ( hardnessCheck == 1 && carbonCheck == 1 && tensileStrCheck == 1 ) {
	        cout << 10 << "\n";
	    } else if ( hardnessCheck == 0 && carbonCheck == 0 && tensileStrCheck == 0 ) {
	        cout << 5 << "\n";
	    } else if ( hardnessCheck == 1 && carbonCheck == 1 ) {
	        cout << 9 << "\n";
	    } else if ( carbonCheck == 1 && tensileStrCheck == 1 ) {
	        cout << 8 << "\n";
	    } else if ( hardnessCheck == 1 && tensileStrCheck == 1 ) {
	        cout << 7 << "\n";
	    } else {
	        cout << 6 << "\n";
	    }
	}
	return 0;
}