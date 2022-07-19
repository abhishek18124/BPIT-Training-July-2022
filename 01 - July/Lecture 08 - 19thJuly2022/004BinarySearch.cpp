#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	int t = 50;

	int s = 0;
	int e = n-1;

	while(s <= e) {
		// int m = (s+e)/2;
		// int m = s + (e-s)/2;
		int m = s + ((e-s)>>1);
		if(A[m]  == t) {
			cout << t << " found at index " << m << endl;
			break;
		} else if(A[m] > t) {
			// reduce the search space from [s, e] -> [s, m-1]
			e = m-1;
		} else {
			// reduce the search space from [s, e] -> [m+1, e]
			s = m+1;
		}
	}

	if(s > e) {
		// search space has become empty
		cout << t << " not found!" << endl;
	}

	return 0;
}