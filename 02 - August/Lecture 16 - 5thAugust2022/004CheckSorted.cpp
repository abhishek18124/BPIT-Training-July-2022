#include<iostream>

using namespace std;

bool f(int* arr, int n, int i) {

	// base case
	if(i == n-1) {
		// check if the arr[n-1...n-1] is sorted ?
		return true;
	}

	// recursive case

	return arr[i] < arr[i+1] and f(arr, n, i+1);
}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	f(arr, n, 0) ? cout << "array is sorted!" << endl :
	               cout << "array is not sorted!" << endl;

	return 0;
}