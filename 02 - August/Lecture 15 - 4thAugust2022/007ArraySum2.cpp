#include<iostream>

using namespace std;

int f(int* arr, int i) {

	// base case
	if(i == -1) {
		// compute the sum of elements in the arr[0...-1] -> empty subarray
		return 0;
	}
	
	// if(i == 0) {
	// 	// compute the sum of elements in the arr[0...0]
	// 	return arr[0];
	// }

	// recursive case

	// 1. ask your friend to compute the sum of elements in the arr[0...i-1]
	int A = f(arr, i-1);

	return A + arr[i];
}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	cout << f(arr, n-1) << endl;

	return 0;
}