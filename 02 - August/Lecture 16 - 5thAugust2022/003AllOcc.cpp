#include<iostream>

using namespace std;

bool flag = false; // assume 't' is not found

void f(int* arr, int n, int t, int i) {

	// base case 
	if(i == n) {
		if(!flag) { // flag == false
			// 't' is not present in the array
			cout << -1;
		}
		return;
	}

	// recursive case

	if(arr[i] == t) {
		flag = true;
		cout << i << " ";
	}

	f(arr, n, t, i+1);
}

int main() {

	int arr[] = {10, 20, 30, 20, 30};
	int n = sizeof(arr) / sizeof(int);
	int t = 100;

	f(arr, n, t, 0);

	return 0;
}