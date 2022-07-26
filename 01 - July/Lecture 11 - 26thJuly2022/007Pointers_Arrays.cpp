#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	int* ptr = A; 

	for(int i=0; i<n; i++) {
		cout << A[i] << " " << *(A+i) << " " << *(ptr+i) << " " << &A[i] << " " << A+i << endl;
	}

	return 0;
}