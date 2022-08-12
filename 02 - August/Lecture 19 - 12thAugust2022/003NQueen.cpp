/*

N Queens Problem

The problem is to place 'n' queens on an 'n x n' chessboard, so that no two queens are attacking 
each other, this means that no two queens are in the same row, the same column, or the same diagonal.

Example 
	Input : N = 4
	Output: 
			_ Q _ _	     _ _ Q _
	        _ _ _ Q      Q _ _ _ 
	        Q _ _ _      _ _ _ Q
	        _ _ Q _      _ Q _ _ 

	        [1, 3, 0, 2] [2, 0, 3, 1]

Constraint:
	1<=n<=10	        

*/

#include<iostream>

using namespace std;

void nQueens(int n, int* qpos, int r) {

	// base case 
	if(r == n) {	
		// 'n' queens have been placed on the 'nxn' chessboard
		
		// for(int i=0; i<n; i++) {
		// 	cout << qpos[i] << " ";
		// }
		// cout << endl;

		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(qpos[i] == j) {
					cout << "Q ";
				} else {
					cout << "_ ";
				}
			}
			cout << endl;
		}
		cout << endl;
		return ;
	}

	// recursive case - make a decision for 'Qr' 

	// place the 'Qr' in the jth column of row 'r' where 0 <= j < n
	// such that it does not attack on previously placed queen 'Qi'
	// where 0 <= i < r

	for(int j=0; j<n; j++) {

		// check if the jth column in row 'r' is valid to place 'Qr'

		bool flag = true; // assume, jth column is a valid to place 'Qr'

		for(int i=0; i<r; i++) {
			if(qpos[i] == j || qpos[i] == j-(r-i) || qpos[i] == j+(r-i)) {
				flag = false;
				break;
			}
		}

		if(flag) {
			qpos[r] = j;
			nQueens(n, qpos, r+1);
		}
	}

}

	
int main() {

	int n = 4;
	int qpos[10];

	nQueens(n, qpos, 0);

	return 0;
}