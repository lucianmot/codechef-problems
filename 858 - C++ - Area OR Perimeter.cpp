// C++ - Area OR Perimeter
// Rating - 858
// https://www.codechef.com/problems/AREAPERI

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); // Synchronize input and output streams
	int l, b, area, peri; // Declare variables
	cin >> l >> b; // Take inputs
	area = l * b; // Calculate area
	peri = 2 * (l + b); // Calculate perimeter
	if(area == peri) cout << "Eq" << "\n" << area << "\n"; // Prints 'Eq' if area equals perimeter
	else if(area > peri) cout << "Area" << "\n" << area << "\n"; // Prints 'Area' if area is greater than perimeter
	else if(area < peri) cout << "Peri" << "\n" << peri << "\n"; // Prints 'Peri' if area is less than perimeter
	return 0; // Return 0 to indicate successful execution 
}