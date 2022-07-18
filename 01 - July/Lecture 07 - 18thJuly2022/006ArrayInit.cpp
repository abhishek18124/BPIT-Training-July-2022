#include<iostream>

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50};
	cout << "A[0] = " << A[0] << endl;
	cout << "A[1] = " << A[1] << endl;
	cout << "A[2] = " << A[2] << endl;
	cout << "A[3] = " << A[3] << endl;
	cout << "A[4] = " << A[4] << endl;

	int B[] = {100, 200, 300};

	cout << "sizeof(B) = " << sizeof(B) << "B" << endl;
	cout << "B[0] = " << B[0] << endl;
	cout << "B[1] = " << B[1] << endl;
	cout << "B[2] = " << B[2] << endl;

	int C[5] = {};
	cout << "sizeof(C) = " << sizeof(C) << "B" << endl;
	for(int i=0; i<5; i++) {
		cout << "C[" << i << "] = " << C[i] << endl; 
	}

	int D[] = {10, 20, 30, 40, 50};
	int n = sizeof(D) / sizeof(int);
	cout << "sizeof(D) = " << sizeof(D) << "B" << endl;
	for(int i=0; i<n; i++) {
		cout << "D[" << i << "] = " << D[i] << endl;
	}

	return 0;
}