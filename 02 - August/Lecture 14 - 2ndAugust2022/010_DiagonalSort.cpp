/*

Given an integer matrix of dimensions m x n, sort it diagonally.

Example :
	Input : mat[][] = [[1,  3,  10,  4],
					   [13, 14, 15, 2],
					   [11, 16, 9,  12],
					   [8,  7,  5,  6]]
					   

	Input : mat[][] = [[1, 3,  2,  4],
					   [5, 6,  12, 10],
					   [7, 13, 9,  15],
					   [8, 11, 16, 14]]
	
	m <= 10
	n <= 10
	
					  
*/

#include<iostream>
#include<algorithm>

using namespace std;

void sortDiagonal(int mat[][10], int m, int n, int i, int j) {
	int diagonalLength = min(m-i, n-j);
	int arr[10];

	for(int k=0; k<diagonalLength; k++) {
		arr[k] = mat[i+k][j+k];
	}

	sort(arr, arr+diagonalLength);

	for(int k=0; k<diagonalLength; k++) {
		mat[i+k][j+k] = arr[k];
	}

}

void diagonalSort(int mat[][10], int m, int n) {

	for(int j=0; j<n; j++) {
		sortDiagonal(mat, m, n, 0, j);
	}

	for(int i=1; i<m; i++) {
		sortDiagonal(mat, m, n, i, 0);
	}

}

int main() {
	
	int mat[10][10] = {{1,  3,  10, 4},
					   {13, 14, 15, 2},
					   {11, 16, 9,  12},
					   {8,  7,  5,  6}};

	int m = 4;
	int n = 4;

	diagonalSort(mat, m, n);

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}

