#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 20, 10};
	int n = sizeof(A) / sizeof(int);

	int t = 10;

	int i;

	for(i=n-1; i>=0; i--) {
		if(A[i] == t) {
			cout << t << " found at index " << i << endl;
			break;
		}
	}

	if(i == -1) {
		cout << t <<  " not found" << endl;
	}

	return 0;
}