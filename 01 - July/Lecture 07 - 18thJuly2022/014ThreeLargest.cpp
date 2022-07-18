#include<iostream>

using namespace std;

int main() {

	int A[] = {10, -5, 0, 12, 4};
	int n = sizeof(A) / sizeof(int);

	int fL = INT_MIN;
	int sL = INT_MIN;
	int tL = INT_MIN;

	for(int i=0; i<n; i++) {
		if(A[i] > fL) {
			tL = sL;
			sL = fL;
			fL = A[i];
		} else if(A[i] > sL) {
			tL = sL;
			sL = A[i];
		} else if(A[i] > tL) {
			tL = A[i];
		}
	}

	cout << fL << " " << sL << " " << tL << endl;
	
	return 0;
}