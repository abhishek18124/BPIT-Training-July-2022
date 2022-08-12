// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int* arr, int s, int e) {

	int pivot = arr[e];
	int i = s-1;

	for(int j=s; j<e; j++) {
		if(arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i+1], arr[e]);
	return i+1;

}

void quickSort(int* arr, int s, int e) {

	// base case
	if(s >= e) {
		return;
	}

	// recursive case

	// 1. partion the arr[s...e] around the pivot i.e. arr[e]
	int p_index = partition(arr, s, e);

	// 2. recursively sort arr[s...p_index-1] and arr[p_index+1...e]

	quickSort(arr, s, p_index-1);
	quickSort(arr, p_index+1, e);


}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}