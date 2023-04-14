// C++ - Inside The Stadium
// Rating - 895
// https://www.codechef.com/problems/INSTDUM

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int sum = 0;
	    int answer = 0;
	    for(int i = 0; i < n; i++) {
	        int num;
	        cin >> num;
	        sum+=num;
	        float strikeRate = (sum / (i+1.00)) * 100.00;
	        if(strikeRate == 100) answer+=1;
	    }
	    cout << answer << "\n";
	}
	return 0;
}