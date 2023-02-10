// C++ - The Block Game
// Rating - 830
// https://www.codechef.com/problems/PALL01

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int answer = 1;
	    vector<int> smallList;
	    while (n > 0) {
	        int digit = n%10;
	        smallList.push_back(digit);
	        n/=10;
	    }
	    int smallVectorSize = smallList.size();
	    for (int i = 0; i < smallVectorSize/2; i++) {
	        if ( smallList[i] != smallList[smallVectorSize-1-i] ) answer = 0;
	    }
	    if (answer == 1) cout << "wins" << "\n";
	    else cout << "loses" << "\n";
	}
	return 0;
}