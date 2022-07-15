#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 2;

	// if((n>>k)&1) {
	// 	cout << k << "th bit of " << n << " is set" << endl;
	// } else {
	// 	cout << k << "th bit of " << n  << " is not set" << endl;
	// }

	// (n>>k)&1 ? cout << k << "th bit of " << n << " is set" << endl :
	//            cout << k << "th bit of " << n  << " is not set" << endl;

	if((1<<k)&n) {
		cout << k << "th bit of " << n << " is set" << endl;
	} else {
		cout << k << "th bit of " << n  << " is not set" << endl;
	}


	return 0;
}