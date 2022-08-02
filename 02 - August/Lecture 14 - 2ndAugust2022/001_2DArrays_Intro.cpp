/*

	Constraints

	0 < m, n <= 10

	here, m denotes the no. of rows in the given 2D array
	      n denotes the no. of cols in the given 2D array

*/

#include<iostream>

using namespace std;

int main() {

	int A[10][10];

	int m;
	cout << "Enter the no. of row : ";
	cin >> m;

	int n;
	cout << "Enter the no. of columns : ";
	cin >> n;

	// read mxn values into the 2D array
	
	// iterate over the 'm' rows
	for(int i=0; i<m; i++) {
		// iterate over the 'n' cols for the ith row
		for(int j=0; j<n; j++) {
			cin >> A[i][j];
		}
	}

	cout << endl;

	// print mxn values of the 2D array

	// for(int i=0; i<m; i++) {
	// 	for(int j=0; j<n; j++) {
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	for(int j=0; j<n; j++) {
		for(int i=0; i<m; i++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}


