// C++ - Motivation
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/IMDB

// Unsolved yet, still learning vector/arrays in c++

#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int n, x;
	    cin >> n >> x;
	    cout << "this is n: " << n << " this is x: " << x << endl;
	    vector<int> sizeMovies;
	    vector<int> ratingMovies;
	    for (int i = 0; i < n; i++) {
	        int size, rating;
	        cin >> size >> rating;
	        cout << "this is the size: " << size << " this is the rating: " << rating << endl;
	        sizeMovies.push_back(size);
	        ratingMovies.push_back(rating);
	    }
	    for (auto it : sizeMovies) {
	        cout << "this is a size movies element: " << it << endl; 
	    }
	}
	return 0;
}