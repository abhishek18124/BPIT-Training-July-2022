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

void printPrimes(int N) {
	for(int n=2; n<=N; n++) {
		if(isPrime(n)) {
			cout << n << " "; 
		}
	}
	cout << endl;
}

int main() {

	int N;
	cout << "Enter the value of N : ";
	cin >> N;

	printPrimes(N);
	
	return 0;
}