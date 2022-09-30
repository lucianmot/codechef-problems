// C++ - Reverse The Number
// Rating - ---
// https://www.codechef.com/LP0TO101/problems/FLOW007

#include<iostream>
using namespace std;
int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        int number;
        cin >> number;
        int answer = 0;
        while(number) {
            answer = answer*10+number%10;
            number/=10;
        }
        cout << answer << endl;
    }

    return 0;
}