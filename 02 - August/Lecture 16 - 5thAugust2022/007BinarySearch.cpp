#include<iostream>

using namespace std;

int f(int* arr, int t, int s, int e) {

	// base case
	if(s > e) {
		// search for the target in arr[s...e] -> empty array
		return -1;
	}

	// recursive case

	int m = s+(e-s)/2;
	if(arr[m] == t) {
		// you've found the 't' at index 'm'
		return m;
	} else if(arr[m] > t) {
		// reduce the search space from [s, e] to [s, m-1] and search for the 't' in it -> ask your friend
		return f(arr, t, s, m-1);
	} else {
		// reduce the search space from [s, e] to [m+1, e] and search for the 't' in it -> ask your friend
		return f(arr, t, m+1, e);
	}
}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	cout << f(arr, t, 0, n-1) << endl;

	return 0;
}