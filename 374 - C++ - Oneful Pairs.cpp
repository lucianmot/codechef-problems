// C++ - Oneful Pairs
// Rating - 374
// https://www.codechef.com/problems/ONEFULPAIRS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, ans;
	cin >> a >> b;
	ans = a + b + a * b;
	if(ans == 111) cout << "Yes" << "\n";
	else cout << "No" << "\n";
	return 0;
}