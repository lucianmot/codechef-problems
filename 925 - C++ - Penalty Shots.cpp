// C++ - Penalty Shots
// Rating - 925
// https://www.codechef.com/problems/PENALTY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    a = 0;
	    b = 0;
	    for(int i = 1; i < 11; i++) {
	        int num;
	        cin >> num;
	        if(i % 2 == 0) {
	            b+=num;  
	        } else {
	            a+=num;
	        }
	    }
	    if(a == b) {
	        cout << 0 << "\n";
	    } else if(a > b) {
	        cout << 1 << "\n";
	    } else if(a < b) {
	        cout << 2 << "\n";
	    }
	}
	return 0;
}