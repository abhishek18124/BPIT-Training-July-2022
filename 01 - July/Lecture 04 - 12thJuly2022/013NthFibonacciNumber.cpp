#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int a = 0; // to store the 0th fibonacci number
	int b = 1; // to store the 1st fibonacci number

	if(n == 0) {
		cout << n << "th fibonacci number = " << a << endl;
		return 0; // exit
	}

	int i = 2;
	while(i <= n) {
		int c = a + b;
		a = b;
		b = c;
		i = i+1;
	}

	cout << n << "th fibonacci number = " << b << endl;
	
	return 0;
}