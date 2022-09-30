// C ++ - Enormous Input Test
// Rating - ---
// https://www.codechef.com/LP0TO101/problems/INTEST

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    
    cin >> n >> k;
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if ( num % k == 0) {
            count+=1;
        }
    }
    cout << count << endl;
    return 0;
}
