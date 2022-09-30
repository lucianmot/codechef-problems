// C++ - Sum of Digits
// Rating - ---
// https://www.codechef.com/LP0TO101/problems/FLOW006

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while(testCases--) {
        int num;
        cin >> num;
        int answer = 0;
        while(num!=0) {
            int r = num % 10;
            answer+=r;
            num/=10;
        }
        cout << answer << endl;
    }
    return 0;
}