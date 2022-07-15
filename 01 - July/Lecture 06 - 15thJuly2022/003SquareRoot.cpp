#include<iostream>

using namespace std;

int main() {

	int n = 32;

	float sqrt = 0;

	while(sqrt*sqrt <= n) {
		sqrt = sqrt + 1;
	}

	sqrt = sqrt - 1;

	while(sqrt*sqrt <= n) {
		sqrt = sqrt + 0.1;
	}

	sqrt = sqrt - 0.1;

	while(sqrt*sqrt <= n) {
		sqrt = sqrt + 0.01;
	}

	sqrt = sqrt - 0.01;

	while(sqrt*sqrt <= n) {
		sqrt = sqrt + 0.001;
	}

	sqrt = sqrt - 0.001;


	while(sqrt*sqrt <= n) {
		sqrt = sqrt + 0.0001;
	}

	sqrt = sqrt - 0.0001;


	cout << "sqrt(" << n << ") = " << sqrt << endl;

	return 0;
}