#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 20, 30, 10};
	int n = sizeof(A) / sizeof(int);

	// iterate over the passes of bubble sort algorithm
	for(int i=1; i<=n-1; i++) {
		// in the ith pass, we place the largest element
		// in the unsorted part of the array to its
		// correct position.

		bool flag = false; // assume, no swaps will be done in the ith pass

		for(int j=0; j<n-i; j++) {
			if(A[j] > A[j+1]) {
				flag = true;
				swap(A[j], A[j+1]);
			}
		}

		if(!flag) { // flag == false
			// no swaps were done in the ith pass therefore we can stop the bubble sort algorithm
			break;
		}
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;
	
	return 0;
}