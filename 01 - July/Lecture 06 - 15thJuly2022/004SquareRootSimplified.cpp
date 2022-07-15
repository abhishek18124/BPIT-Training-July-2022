#include<iostream>

using namespace std;

int main() {

	int n = 32;
	int p = 4;

	float sqrt = 0;
	float inc = 1;

	for(int i=1; i<=p+1; i++) {
		while(sqrt*sqrt <= n) {
			sqrt = sqrt + inc;
		}
		sqrt = sqrt - inc;
		inc = inc / 10;
	}

	cout << "sqrt(" << n << ") = " << sqrt << endl;

	return 0;
}