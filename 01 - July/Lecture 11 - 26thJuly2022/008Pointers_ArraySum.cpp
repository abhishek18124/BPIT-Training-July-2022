#include<iostream>

using namespace std;

int sumOfArray(int* A, int n) {

	cout << "sizeof(A) = " << sizeof(A) << "B" << endl;

	int sum = 0;
	for(int i=0; i<n; i++) {
		// sum += *(A+i);
		sum += A[i];
	}

	return sum;

}

int main() {

	int A[] = {1, 2, 3, 4, 5};
	int n = sizeof(A) / sizeof(int);

	cout << "sizeof(A) = " << sizeof(A) << "B" << endl;

	// cout << sumOfArray(&A[0], n) << endl; 
	cout << sumOfArray(A, n) << endl; 


	return 0;
}