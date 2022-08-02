/*

Given an integer matrix 'mat' of dimensions m x n, write a program that prints
the matrix in wave form.

Example :
	Input : mat[][] = [[1, 2, 3],
					   [4, 5, 6],
					   [7, 8, 9]]

	Output : 1 4 7 8 5 2 3 6 9

*/

#include<iostream>

using namespace std;

int main() {

	int mat[][3] = {{1, 2, 3},
					{4, 5, 6},
					{7, 8, 9}};

	int m = 3;
	int n = 3;

	// iterate over the columns
	for(int j=0; j<n; j++) {
		// iterate over the row for the jth column
		if(j%2 == 0) {
			// print from top to bottom
			for(int i=0; i<m; i++) {
				cout << mat[i][j] << " ";
			}
		} else {
			// print from bottom to top
			for(int i=m-1; i>=0; i--) {
				cout << mat[i][j] << " ";
			}
		}
	}

	cout << endl;

	return 0;
}