// C++ - the Tricky Deal
// Rating - 1431
// https://www.codechef.com/problems/TRICKYDL

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        long long int a, currentChef = 0, futureChef = 0, i = 1, d1, d2;
        cin >> a;
        while(futureChef > -1) {
            currentChef+= a - pow(2, (i-1));
            i+=1;
            d1=i-1;
            futureChef=currentChef + a - pow(2, (i-1));
            if(futureChef > currentChef) {
                d2=i;
            }
        }
        cout << d1 << " " << d2 << "\n";
    }
	return 0;
}