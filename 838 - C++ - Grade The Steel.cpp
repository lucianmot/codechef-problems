// C++ - Grade The Steel
// Rating - 838
// https://www.codechef.com/problems/FLOW014

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	// Declare variables for hardness, carbon content, and tensile strength
	int t, hardness, tensileStr;
	float carbon;
	cin >> t;
	while(t--) {
	    // Read in values of hardness, carbon content, and tensile strength
	    cin >> hardness >> carbon >> tensileStr;
	    int hardnessCheck = 0,carbonCheck = 0, tensileStrCheck = 0;
	    // Check if hardness is greater than 50
	    if ( hardness > 50 ) hardnessCheck = 1;
	    // Check if carbon content is less than 0.7
	    if ( carbon < 0.7 ) carbonCheck = 1;
	    // Check if tensile strength is greater than 5600
	    if ( tensileStr > 5600 ) tensileStrCheck = 1;
	    // Output 10 if all conditions are met
	    if ( hardnessCheck == 1 && carbonCheck == 1 && tensileStrCheck == 1 ) {
	        cout << 10 << "\n";
	    // Output 5 if none of the conditions are met 
	    } else if ( hardnessCheck == 0 && carbonCheck == 0 && tensileStrCheck == 0 ) {
	        cout << 5 << "\n";
	    // Output 9 if hardness and carbon content conditions are met
	    } else if ( hardnessCheck == 1 && carbonCheck == 1 ) {
	        cout << 9 << "\n";
	    // Output 8 if carbon content and tensile strength conditions are met
	    } else if ( carbonCheck == 1 && tensileStrCheck == 1 ) {
	        cout << 8 << "\n";
	    // Output 7 if hardness and tensile strength conditions are met
	    } else if ( hardnessCheck == 1 && tensileStrCheck == 1 ) {
	        cout << 7 << "\n";
	    // Output 6 if only one condition is met
	    } else {
	        cout << 6 << "\n";
	    }
	}
	return 0;
}