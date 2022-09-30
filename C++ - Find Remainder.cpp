// C++ - Find Remainder
// Rating - ---
// https://www.codechef.com/LP0TO101/problems/FLOW002

#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    for ( int i = 0; i < testCases; i++) {
        int a, b;
        cin >> a >> b;
        int remainder = a % b;
        cout << remainder << endl;
    }
    return 0;
}