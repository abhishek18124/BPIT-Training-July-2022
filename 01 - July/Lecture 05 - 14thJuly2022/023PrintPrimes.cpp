#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int N;
	cout << "Enter a positive number : ";
	cin >> N;


	for(int n=2; n<=N; n++) {
		// check if 'n' is a prime number or not
		int rn = sqrt(n);
		bool flag = true; // assume n is a prime number
		for(int i=2; i<=rn; i++) {
			if(n%i == 0) {
				flag = false;
				break;
			}
		}

		if(flag) {
			cout << n << " ";
		}
	}

	return 0;
}