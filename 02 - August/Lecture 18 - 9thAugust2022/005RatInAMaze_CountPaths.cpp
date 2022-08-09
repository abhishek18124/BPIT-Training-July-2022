/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> count the number of paths that exist between src and dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output : 3
	
*/

#include<iostream>

using namespace std;

// int countPaths(char maze[][10], int i, int j) {


// 	// base case

// 	if(i == 0 and j == 0) {
// 		return 1;
// 	}

// 	if(i == -1 or j == -1) {
// 		return 0;
// 	}

// 	if(maze[i][j] == 'X') {
// 		return 0;
// 	}

// 	// recursive case

// 	// 1. ask your friend to count the no. of ways to reach the (i-1, j)th cell from (0, 0)th cell
// 	int X = countPaths(maze, i-1, j);

// 	// 2. ask your friend to count the no. of ways to reach the (i, j-1)th cell from (0, 0)th cell
// 	int Y = countPaths(maze, i, j-1);
	
// 	return X + Y;
// }


int countPaths(char maze[][10], int i, int j) {


	// base case

	if(i == 0 and j == 0) {
		return 1;
	}

	if(maze[i][j] == 'X') {
		return 0;
	}

	// recursive case

	if(i == 0) {
		return countPaths(maze, i, j-1);
	}

	if(j == 0) {
		return countPaths(maze, i-1, j);
	}

	// 1. ask your friend to count the no. of ways to reach the (i-1, j)th cell from (0, 0)th cell
	int X = countPaths(maze, i-1, j);

	// 2. ask your friend to count the no. of ways to reach the (i, j-1)th cell from (0, 0)th cell
	int Y = countPaths(maze, i, j-1);
	
	return X + Y;
}



int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X00"};
	int m = 4;
	int n = 4;

	cout << countPaths(maze, m-1, n-1) << endl;

	return 0;
}