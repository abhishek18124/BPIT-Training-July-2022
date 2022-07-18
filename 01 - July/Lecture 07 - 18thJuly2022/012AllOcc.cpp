#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 20, 10};
	int n = sizeof(A) / sizeof(int);

	int t = 100;

	bool flag = false; // assume, target is not found

	for(int i=0; i<n; i++) {
		if(A[i] == t) {
			flag = true;
			cout << t << " found at index " << i << endl;
		}
	}

	if(!flag) { // flag == false
		cout << t <<  " not found" << endl;
	}

	return 0;
}