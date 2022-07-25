#include<iostream>
#include<climits>

using namespace std;

int main() {

	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr) / sizeof(int);

	// O(n^3) time and O(1) space

	int maxSum = INT_MIN;

	// iterate over the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over the possible ending indices for the starting index 'i'
		for(int j=i; j<n; j++) {
			// iterate over the elements of the subarray that starts at index 'i'  and ends at index 'j'
			int sum = 0;
			for(int k=i; k<=j; k++) {
				sum += arr[k];
			}
			if(sum > maxSum) {
				maxSum = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum = " << maxSum << endl;


	return 0;
}