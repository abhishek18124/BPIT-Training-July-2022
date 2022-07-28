// contraints : m <= 10, n <= 10

#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 30, 50, 70};
	int B[] = {20, 40, 60};

	int n = sizeof(A) / sizeof(int);
	int m = sizeof(B) / sizeof(int);

	int i = 0; // to iterate over A[]
	int j = 0; // to iterate over B[]

	int C[20];

	int k = 0; // to iterate over C[]

	// Approach - O(m+n)

	while(i < n and j < m) {
		if(A[i] < B[j]) {
			C[k] = A[i];
			i++;
			k++;
		} else {
			C[k] = B[j];
			j++;
			k++;
		}
	}

	// copy elements from A[] to C[] is A[] still has elements i.e. i<n
	while(i < n) {
		C[k] = A[i];
		i++;
		k++;
	}

	// copy elements from B[] to C[] is B[] still has elements i.e. j<m
	while(j < m) {
		C[k] = B[j];
		j++;
		k++;
	}

	for(int l=0; l<m+n; l++) {
		cout << C[l] << " ";
	}

	cout << endl;

	return 0;
}

