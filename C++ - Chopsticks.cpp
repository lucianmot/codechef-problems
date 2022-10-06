// C++ - Chopsticks
// Rating - ---
// https://www.codechef.com/MP1TO203/problems/TACHSTCK

// Unresolved - passes sample, fails submission

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d;
	cin >> n >> d;
	int arrayus[n];
	for ( int i; i < n; i++ ) {
	    int num;
	    cin >> num;
	    arrayus[i] = num;
	}
	sort(arrayus, arrayus + n);
	int answer = 0;
	for ( int j = 0; j < n; ) {
	    if ( arrayus[j+1] - arrayus[j] <= d ) {
	        answer+=1;
	        j+=2;
	    } else {
	        j++;
	    }
	}
	cout << answer << endl;
	return 0;
}