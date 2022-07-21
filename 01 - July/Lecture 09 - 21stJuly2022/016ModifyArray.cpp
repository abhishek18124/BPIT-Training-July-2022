#include<iostream>

using namespace std;

void modifyArray(int A[], int n) {
	for(int i=0; i<n; i++) {
		A[i] += 1;
	}
}

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	modifyArray(A, n);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}