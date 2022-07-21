#include<iostream>

using namespace std;

bool isEven(int n) {
	// if(n%2 == 0) {
	// 	return true;
	// }
	// return false;

	return n%2 == 0; // in c++, you can also return an expr from a fn.
}

int main() {

	// bool ans = isEven(5);

	// if(ans == true) {
	// 	cout << 5 << " is an even number" << endl;
	// } else {
	// 	cout << 5 << "  is an odd number" << endl;
	// }

	// if(isEven(4)) {
	// 	cout << "even" << endl;
	// } else {
	// 	cout << "odd" << endl;
	// }

	// isEven(5) ? cout << "even" << endl :
	//             cout << "odd" << endl;

	cout << isEven(4) << endl;
	
	return 0;
}