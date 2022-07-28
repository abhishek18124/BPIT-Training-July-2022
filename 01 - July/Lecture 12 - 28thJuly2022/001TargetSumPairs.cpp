
#include<iostream>
#include<algorithm>

using namespace std;

int main() {	

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	// Approach - 1 time : O(N^2)

	// int count = 0;
	// for(int i=0; i<n-1; i++) {
	// 	for(int j=i+1; j<n; j++) {
	// 		if(arr[i] + arr[j] == t) {
	// 			count++;
	// 		}
	// 	}
	// }


	// Approach - 2 O(nlogn)

	// int count = 0;
	// for(int i=0; i<n-1; i++) {
	// 	if(binary_search(arr+i+1, arr+n,  t-arr[i])) {
	// 		count++;
	// 	}
	// }


	// Approach - 3 O(n)

	int i = 0;
	int j = n-1;
	int count = 0;

	while(i<j) {
		if(arr[i]+arr[j] == t) {
			count++;
			i++;
			j--;
		} else if(arr[i]+arr[j] > t) {
			j--;
		} else {
			i++;
		}
	}

	cout << "count = " << count << endl;

	return 0;
}