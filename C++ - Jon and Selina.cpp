// C++ - Jon and Selina
// Rating - ---
// https://www.codechef.com/LP2TO305/problems/SELINA

// setter solution using bitwise and 1 and frequency vector
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	string s;
// 	cin >> t;
// 	while(t--) {
// 	    cin >> s;
// 	    vector<int> freq(26, 0);

//         for(char ch : s) freq[ch - 'a']++;

//         string answer = "!";
            
//         for (int i = 0; i < 26; i++) {
//             if ( freq[i]&1 ) {
//                 answer = (char)(i + 'a');
//                 break;
//             }
//         }
        
//         answer != "!" ? cout << answer << endl : cout << -1 << endl;
// 	}
// 	return 0;
// }

// my solution using unordered map to count duplicates looping over 2nd and checking which one is odd
