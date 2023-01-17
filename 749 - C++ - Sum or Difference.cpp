// C++ - Sum or Difference
// Rating - 749
// https://www.codechef.com/problems/DIFFSUM

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int n1, n2;
	cin >> n1 >> n2;
	int elSum = n1 + n2;
	int elDiff = n1 - n2;
	n1 > n2 ? cout << elDiff << "\n" : cout << elSum << "\n";
	return 0;
}