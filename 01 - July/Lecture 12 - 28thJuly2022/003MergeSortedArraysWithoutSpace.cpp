// contraints : m <= 10 and n <= 10

#include<iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int A[20];
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}`

	int B[10];
	for(int i=0; i<m; i++) {
		cin >> B[i];
	}

	int i = n-1;
	int j = m-1;
	int k = m+n-1;

	while(i >= 0 and j >= 0) {
		if(A[i] > B[j]) {
			A[k] = A[i];
			i--;
			k--;
		} else {
			A[k] = B[j];
			j--;
			k--;
		}
	}

	while(j >= 0) {
		A[k] = B[j];
		k--;
		j--;
	}

	for(int l=0; l<m+n; l++) {
		cout << A[l] << " ";
	}

	cout << endl;

	return 0;
	
}