#include<iostream>

using namespace std;

int main() {

	// int a, b, c;
	// cin >> a >> b >> c;

	int a;
	cout << "Enter the first value : ";
	cin >> a;

	int b;
	cout << "Enter the second value : ";
	cin >> b;

	int c;
	cout << "Enter the third value : ";
	cin >> c;

	if(a > b && a > c) {
		cout << a << " is the largest of the three numbers" << endl;
	} else {
		// either b is the largest or c is the largest
		if(b > c) {
			cout << b << " is the largest of the three numbers" << endl;
		} else {
			cout << c << " is the largest of the three numbers" << endl;
		}
	}

	return 0;
}


