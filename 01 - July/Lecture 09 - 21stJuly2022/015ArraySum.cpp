#include<iostream>

using namespace std;

int computeSum(int A[], int n) {
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += A[i];
	}
	return sum;
}

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	cout << computeSum(A, n) << endl;

	return 0;
}