// C++ - Mahasena
// Rating - 533
// https://www.codechef.com/problems/AMR15A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	int n;
	cin >> n;
	int elEven, elOdd = 0;
	for (int i = 0; i < n; i++) {
	    int num;
	    cin >> num;
	    num % 2 == 0 ? elEven++ : elOdd++;
	};
	
	elEven > elOdd ? cout << "READY FOR BATTLE" << endl : cout << "NOT READY" << endl;
	
	return 0;
}