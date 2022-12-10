// C++ - Chef and Feedback
// Rating - ---
// https://www.codechef.com/LP1TO203/problems/ERROR

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie(NULL);
	int t;
    cin >> t;
    while (t--) {
        string f;
        cin >> f;
        
        int l = f.length()-3;
        int answer = 0;

        for ( int i=0; i <= l; i++ ) {
            if( f[i]!=f[i+1] && f[i+1]!=f[i+2] ){
                answer = 1;
                break;
            }
        }   
        answer == 1 ? cout << "Good" << endl : cout << "Bad" << endl;
    }
	return 0;
}