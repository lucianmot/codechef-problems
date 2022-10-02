// C++ - Make them equal
// Rating - ---
// https://www.codechef.com/LP1TO202/problems/MAKEEQUAL

<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int min = 1000000000;
	    int max = 0;
	    int aList[n];
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        if ( num < min ) {
	            min = num;
	        }
	        if ( num > max ) {
	            max = num;
	        }
	        aList[i] = num;
	    }
	    cout << max - min << endl;
	}
	return 0;
}
=======
/*
Solution design
take in testcases
take in array length
create a min element equal to 100.000.000
create a max element equal to like 0
take in array elements one by one with cin
if statements if smaller than min replace it
if larger than max replace it with value
do difference between min and max and cout
*/
>>>>>>> 43edab0cb53364542e7112adb1ca80f32ff4a5da
