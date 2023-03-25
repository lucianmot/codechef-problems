// C++ - Area OR Perimeter
// Rating - 858
// https://www.codechef.com/problems/AREAPERI

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int l, b, area, peri;
	cin >> l >> b;
	area = l * b;
	peri = 2 * (l + b);
	if(area == peri) cout << "Eq" << "\n" << area << "\n";
	else if(area > peri) cout << "Area" << "\n" << area << "\n";
	else if(area < peri) cout << "Peri" << "\n" << peri << "\n";
	return 0;
}