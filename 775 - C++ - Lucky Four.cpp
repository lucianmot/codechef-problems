// C++ - Lucky Four
// Rating - 775
// https://www.codechef.com/problems/LUCKFOUR

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int answer = 0;
	    for(int i = n; i > 0; i/=10){
	        if(i % 10 == 4) {
	            answer++;
	        }
	    }
	    cout << answer << "\n";
	}
	return 0;
}