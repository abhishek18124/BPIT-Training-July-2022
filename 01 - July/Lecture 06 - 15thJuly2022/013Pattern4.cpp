#include<iostream>

using namespace std;

int main() {

	int n = 9;

	int m = n/2;

	// 1. print the 1st part
	for(int i=1; i<=n; i++) {
		cout << "*";
	}

	cout << endl;

	// 2. print the 2nd part
	for(int i=1; i<=m; i++) {

		// for the ith row, we have to print (m-i+1) stars 
		for(int j=1; j<=m-i+1; j++) {
			cout << "*";
		}

		// followed by 2i-1 spaces
		for(int j=1; j<=2*i-1; j++) {
			cout << " ";
		}

		// followed by (m-i+1) stars 
		for(int j=1; j<=m-i+1; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// 3. print the 3rd part
	for(int i=2; i<=m; i++) {

		// for the ith row, we have to print i stars 
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		// followed by 2*(m-i)+1 spaces
		for(int j=1; j<=2*(m-i)+1; j++) {
			cout << " ";
		}

		// followed by i stars 
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		cout << endl;

	}


	// 4. print the 4th part
	for(int i=1; i<=n; i++) {
		cout << "*";
	}

	cout << endl;
	

	return 0;
}