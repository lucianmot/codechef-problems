// C++ - Chef and Water Bottles
// Rating - 662
// https://www.codechef.com/problems/CHEFBOTTLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, k;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> k;
	    int filledBottles = floor(k / x);
	    int answer = n < filledBottles ? n : filledBottles;
	    cout << answer << endl;
	}
	return 0;
}