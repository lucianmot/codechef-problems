// C++ - Chef and Spells
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/CHFSPL

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    int aList[3] = {a, b, c};
	    std::sort(aList, aList + 3);
	    cout << aList[1] + aList[2] << endl;
	}
	return 0;
}