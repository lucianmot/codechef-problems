// C++ - Problems in your to-do list
// Rating - 580
// https://www.codechef.com/problems/TODOLIST

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int theCounter = 0;
	    for (int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        if (num >= 1000) theCounter++;
	    }
	    cout << theCounter << endl;
	}
	return 0;
}