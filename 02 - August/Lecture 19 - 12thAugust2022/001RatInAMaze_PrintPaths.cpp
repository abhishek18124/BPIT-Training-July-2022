/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> generate all the paths from src to dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output :

	       {"1100", {"1000", {"1000",
            "0100",	 "1100",  "1000",
            "0110",  "0110",  "1110",
            "0011"}  "0011"}  "0011"}

*/

#include<iostream>

using namespace std;

void printPaths(char maze[][10], char soln[][10], int m, int n, int i, int j) {

	// base case
	if(i  == 0 && j == 0) {
		soln[i][j] = '1';
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		soln[i][j] = '0';
		return;
	}

	if(i == -1 || j == -1) {
		return;
	}

	if(maze[i][j] == 'X') {
		return;
	}

	// recursive case

	soln[i][j] = '1';
	printPaths(maze, soln, m, n, i-1, j);
	printPaths(maze, soln, m, n, i, j-1);
	soln[i][j] = '0';

}

int main() {

	char maze[][10] = {"0000",
	           		   "00X0",
	                   "000X",
	                   "0X00"};

	char soln[][10] = {"0000",
	                   "0000",
	                   "0000",
	                   "0000"};
	int m = 4;
	int n = 4;

	printPaths(maze, soln, m, n, m-1, n-1);

	return 0;
}