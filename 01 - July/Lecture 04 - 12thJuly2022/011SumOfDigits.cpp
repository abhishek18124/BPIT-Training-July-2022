#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive value : ";
	cin >> n;

	int sum = 0;
	while(n > 0) {
		// extract the right-most digit of n
		int d = n%10;
		sum = sum + d;
		n = n/10;
	}

	cout << "sum of digits : " << sum << endl;
	
	return 0;
}