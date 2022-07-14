#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive number : ";
	cin >> n;

	int rn = sqrt(n);
	int i;
	for(i=2; i<=rn; i++) {
		if(n%i == 0) {
			// cout << n << " is not a prime number" << endl;
			break;
		}
	}

	// if(i > rn) {	
	// 	cout << n << " is a prime number" << endl;
	// } else {
	// 	cout << n << " is not a prime number" << endl;
	// }

	i > rn ? cout << n << " is a prime number" << endl :
	         cout << n << " is not a prime number" << endl;

	return 0;
}