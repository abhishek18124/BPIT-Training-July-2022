#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int A[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(A) / sizeof(int);

	// sorting a sequence (nlogn)
	sort(A, A+n);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// reversing a sequence
	reverse(A, A+n);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// finding the minimum value in a sequence 
	cout << *min_element(A, A+n) << endl;

	// finding the maximum value in a sequence
	cout << *max_element(A, A+n) << endl;

	// finding a value in a sequence
	int key = 10;
	auto ptr = find(A, A+n, key);
	if(ptr != A+n) {
		cout << key << " found at index " << (ptr-A) << endl;
	}

	// counting a value in a sequence - O(n)
	cout << count(A, A+n, key) << endl;

	// reverse the array again, so that it is sorted
	reverse(A, A+n);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// testing if a value is present in a sorted sequence
	key = 10;
	binary_search(A, A+n, key) ? cout << key << " is found!" << endl :
	                             cout << key << " is not found!" << endl;

	// finding lower bound for a value in a sorted sequence

	// it will give the pointer to the first element in the sequence which is not less the key
	key = 30;
	cout << lower_bound(A, A+n, key)-A << endl;                             

	// finding upper bound for a value in a sorted sequence

	// it will give the pointer to the first element in the sequence which is greater than the key
	cout << upper_bound(A, A+n, key)-A << endl;

	// counting a value in a sorted sequence
	key = 10;
	cout << upper_bound(A, A+n, key) - lower_bound(A, A+n, key) << endl;


	return 0;
}
