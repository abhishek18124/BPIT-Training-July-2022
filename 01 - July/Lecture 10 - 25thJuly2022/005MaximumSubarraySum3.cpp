
// constraints : n <= 100

#include<iostream>
#include<climits>

using namespace std;

int main() {

	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr) / sizeof(int);

	// O(n) time and O(n) space

	// int x[100];
	// x[0] = arr[0];
	// int maxSum = x[0];
	// for(int i=1; i<n; i++) {
	// 	x[i] = max(x[i-1]+arr[i], arr[i]);
	// 	if(x[i] > maxSum) {
	// 		maxSum = x[i];
	// 	}
	// }

	// O(n) time and O(1) space

	int x = arr[0];
	int maxSum = x;
	for(int i=1; i<n; i++) {
		x = max(x+arr[i], arr[i]);
		if(x > maxSum) {
			maxSum = x;
		}
	}

	cout << "Maximum Subarray Sum = " << maxSum << endl;

	return 0;
}