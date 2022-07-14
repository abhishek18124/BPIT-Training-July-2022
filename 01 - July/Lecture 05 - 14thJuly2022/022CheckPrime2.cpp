#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive number : ";
	cin >> n;

	int rn = sqrt(n);
	bool flag = true; // assume n is a prime  number
	for(int i=2; i<=rn; i++) {
		if(n%i == 0) {
			cout << n << " is not a prime number" << endl;
			flag = false;
			break;
		}
	}

	if(flag) { // flag == true	
		cout << n << " is a prime number" << endl;
	}

	return 0;
}