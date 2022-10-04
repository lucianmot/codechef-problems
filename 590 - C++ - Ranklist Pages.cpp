// C++ - Ranklist Pages
// Rating - 590
// https://www.codechef.com/submit/RANKLISTPAGE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    float rank;
	    cin >> rank;
	    cout << ceil(rank/25) << endl;
	}
	return 0;
}
