// C++ - The Mango Truck
// Rating - 482
// https://www.codechef.com/problems/MANGOES

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, z;
    cin >> t;
    while (t--) {
        int counter = 0;
        cin >> x >> y >> z;
        while (counter * x + y <= z) {
            counter++;
        }
        cout << counter - 1 << endl;
    }
    return 0;
}