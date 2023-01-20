// C++ - Reverse The Number
// Rating - 588
// https://www.codechef.com/problems/FLOW007

#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int ans = 0;
        while(n) {
            ans = ans * 10 + n % 10;
            n/=10;
        }
        cout << ans << endl;
    }
    return 0;
}