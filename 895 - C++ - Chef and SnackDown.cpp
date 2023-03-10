// C++ - Chef and SnackDown
// Rating - 895
// https://www.codechef.com/problems/SNCKYEAR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	int hosted[5] = {2010, 2015, 2016, 2017, 2019};
	cin >> t;
	while(t--) {
	    cin >> x;
	    int answer = 0;
	    for(int i : hosted) {
	        if(x == i) answer = 1;
	    }
	    if(answer == 0) cout << "NOT HOSTED" << "\n";
	    else cout << "HOSTED" << "\n";
	}
	return 0;
}