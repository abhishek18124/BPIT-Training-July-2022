#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int a = 0; // to store the 0th fib. no.
	int b = 1; // to store the 1st fib. no.

	if(n == a || n == b) {
		cout << n << " is part of the fibonacci seq." << endl;
		return 0; // exit
	}

	while(true) {

		// generate the next fibonacci no.
		int c = a + b;

		if(c == n) {
			cout << n << " is part of the fibonacci seq." << endl;
			return 0; // exit
		}

		if(c > n) {
			cout << n << " is not part of fibonacci seq." << endl;
			return 0; // exit
		}

		a = b;
		b = c;

	}
	
	return 0;
}