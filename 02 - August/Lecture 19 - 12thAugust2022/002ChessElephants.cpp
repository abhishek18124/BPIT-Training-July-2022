/*

Given a n x n chess board, count the number of ways a chess elephant can move from (0, 0)
to (n-1, n-1) such that it can only move in the right or down direction at a time.

Example 
	Input : n = 2
	Output: 2
	
	Input : n = 3
	Output: 14
	
	Input : n = 4
	Output: 106

*/

#include<iostream>

using namespace std;

int countElephantWays(int i, int j) {

	// base case
	if(i == 0 and j == 0) {
		return 1;
	}

	// recursive case

	int s1 = 0;
	for(int k=1; k<=i; k++) {
		// ask your friend to compute number of ways to reach the (i-k, j)th cell from top-left
		s1 += countElephantWays(i-k, j);
	}

	int s2 = 0;
	for(int k=1; k<=j; k++) {
		// ask your friend to compute number of ways to reach the (i, j-k)th cell from top-left
		s2 += countElephantWays(i, j-k);
	}

	return s1+s2;
}

int main() {

	int n = 2;

	cout << countElephantWays(n-1, n-1) << endl;
	
	return 0;
}



