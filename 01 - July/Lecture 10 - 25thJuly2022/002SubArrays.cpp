#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	// iterate over the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over the possible ending indices for the starting index 'i'
		for(int j=i; j<n; j++) {
			// iterate over the elements of the subarray that starts at index 'i'  and ends at index 'j'
			for(int k=i; k<=j; k++) {
				cout << arr[k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}