// C++ - Remove Bad Elements
// Rating - 1100
// https://www.codechef.com/submit/REMOVEBAD

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for ( int i = 0; i < n; i++ ) {
	        int num;
	        cin >> num;
	        arr[i] = num;
	    }
	    int highest_freq = 0;
	    unordered_map<int, int> mp;
 
        for (int i = 0; i < n; i++)
            mp[arr[i]]++;

        for (auto x : mp)
            if ( x.second > highest_freq ) {
                highest_freq = x.second;
            }
        cout << n - highest_freq << endl;
	}
	return 0;
}