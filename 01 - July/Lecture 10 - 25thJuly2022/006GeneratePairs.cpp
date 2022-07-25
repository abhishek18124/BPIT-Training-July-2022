#include<iostream>
#include<climits>

using namespace std;

void generatePairs(int arr[], int n) {

	// iterate over all the possible indices of the 1st element in a pair
	for(int i=0; i<n-1; i++) {
		// iterate over all the possible indices of the 2nd element in a pair
		for(int j=i+1; j<n; j++) {
			cout << "(" << arr[i] << ", " << arr[j] << ") ";
		}
		cout << endl;
	}

}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	generatePairs(arr, n);

	return 0;
}