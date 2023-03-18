// C++ - Chef and easy problem
// Rating - 1408
// https://www.codechef.com/problems/CHEFA

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	long long int t, n; // o(1)
	cin >> t; // o(1)
	while(t--) { // o(n)
	    cin >> n; // o(1)
	    long long int chef = 0; // o(1)
	    long long int roma = 0; // o(1)
	    long long int stoneArray[n]; // o(1)
	    for(long long int i = 0; i < n; i++) { // o(n)
	        cin >> stoneArray[i]; // o(1)
	    }
	    sort(stoneArray, stoneArray + n, greater<long long int>()); // o n log(n)
	    for(long long int j = 0; j < n; j++) { // o(n)
	        if(j % 2 == 0) {
	            chef+=stoneArray[j]; // o(1)
	        } else {
	            roma+=stoneArray[j]; // o(1)
	        }
	    }
	    cout << chef << "\n"; // o(1)
	}
	return 0;
}