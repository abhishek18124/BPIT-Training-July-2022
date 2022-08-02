/*

Given an matrix of dimensions m x n and an int. 
't', write a program to search for 't' in 'mat'. 

Example :
	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12],
					   [13, 14, 15, 16]]

			t = 10

	Output: True

*/

#include<iostream>

using namespace std;

bool matrixSearch(int mat[][4], int m, int n, int t) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(mat[i][j] == t) {
				return true;
			}
		}
	}
	return false;
}

int main() {

	int mat[][4]  = {{1,  2,  3,  4},
					 {5,  6,  7,  8},
					 {9,  10, 11, 12},
					 {13, 14, 15, 16}};

	int m = 4;
	int n = 4;

	int t = 100;

	matrixSearch(mat, m, n, t) ? cout << t << " is present" << endl :
	                             cout << t << " is not present" << endl;

	return 0;
}



