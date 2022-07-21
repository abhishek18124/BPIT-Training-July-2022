#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {
	int rn = sqrt(n);
	for(int i=2; i<=rn; i++) {
		if(n%i == 0) {
			// n is not a prime number
			return false;
		}
	}
	// n is a prime number
	return true;
}

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	isPrime(n) ? cout << "Prime" << endl :
	             cout << "Not a Prime number";

	return 0;
}