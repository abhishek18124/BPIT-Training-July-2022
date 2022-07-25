// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr) / sizeof(int);

	// O(n^2) time and O(n) space

	int csum[101];
	csum[0] = 0;

	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1] + arr[i-1];
	}

	int maxSum = INT_MIN;

	// iterate over the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over the possible ending indices for the starting index 'i'
		for(int j=i; j<n; j++) {
			int sum = csum[j+1] - csum[i];
			if(sum > maxSum) {
				maxSum = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum = " << maxSum << endl;


	return 0;
}