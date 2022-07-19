#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 20, 30, 10};
	int n = sizeof(A) / sizeof(int);

	// iterate over the passes starting from 0th pass and going till the (n-2)th pass
	for(int i=0; i<=n-2; i++) {
		// in ith pass, place the smallest element in the unsorted part of the array to its correct position 'i'
		int min_idx = i;
		for(int j=i+1; j<n; j++) {
			if(A[j] < A[min_idx]) {
				min_idx = j;
			}
		}
		swap(A[i], A[min_idx]);
	}
	
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;
	
	return 0;
}