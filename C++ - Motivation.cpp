// C++ - Motivation
// Rating - ---
// https://www.codechef.com/LP1TO201/problems/IMDB

// Unsolved yet, still learning vector/arrays in c++

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	while(testCases--) {
	    int n, x;
	    cin >> n, x;
	    std::vector<int> sizeMovies;
	    std::vector<int> ratingMovies;
	    for (int i = 0; i < n; i++) {
	        int size, rating;
	        cin >> size, rating;
	        sizeMovies.push_back(size);
	        ratingMovies.push_back(rating);
	    }
        for (int i: ratingMovies) {
            std::cout << i << endl;
        }
	}
	return 0;
}
