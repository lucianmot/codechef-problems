// C++ - Decrement or Increment
// Rating - 722
// https://www.codechef.com/problems/DECINC

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int n;
	cin >> n;
	n % 4 == 0 ? cout << n+1 << "\n" : cout << n-1 << "\n";
	return 0;
}