// C++ - Possible Victory
// Rating - 769
// https://www.codechef.com/problems/T20MCH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, o, c;
	cin >> r >> o >> c;
	r < (20 - o) * 36 + c ? cout << "YES" << "\n" : cout << "NO" << "\n";
	return 0;
}