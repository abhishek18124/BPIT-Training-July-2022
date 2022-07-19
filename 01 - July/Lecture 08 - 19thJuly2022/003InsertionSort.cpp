#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 20, 30, 10};
	int n = sizeof(A) / sizeof(int);

	// iterate over the passes starting from 1 to (n-1)
	for(int i=1; i<=n-1; i++) {
		// in the ith pass, insert the 1st element in the unsorted
		// part of the array which A[i] to its correct position in 
		// the sorted part of the array
		int key = A[i];
		int j = i-1;
		while(j >= 0 and A[j] > key) {
			// shift the value at the jth index to the (j+1)th index
			A[j+1] = A[j];
			j--;
		}

		// insert key to the right of the value at the jth index
		A[j+1] = key;

	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;
	
	return 0;
}