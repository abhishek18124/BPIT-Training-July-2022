#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;

	cout << "Enter the value of n : ";
	cin >> n;

	int i = 2;
	int rn = sqrt(n);
	while(i <= rn) {
		if(n%i == 0) {
			// you've found a factor of n in the [2, n-1]
			cout << n << "  is not a prime number" << endl;
			return 0; // exit
		}
		i = i+1;
	}

	cout << n << " is a prime number" << endl;
	
	return 0;
}