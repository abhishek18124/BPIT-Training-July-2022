#include<iostream>

using namespace std;

int main() {

	// allocate memory for a 1D array on the heap memory
	int* ptr = new int[5]{10, 20, 30, 40, 50};

	// access elements of the 1D array
	for(int i=0; i<5; i++) {
		cout << *(ptr+i) << " " << ptr[i] << endl;
	}

	// deallocate memory for 1D array
	delete [] ptr;

	return 0;
}