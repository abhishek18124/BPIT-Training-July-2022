#include<iostream>

using namespace std;

int main() {

	int x = 14;
	int y = 21;

	cout << x << "&" << y << " = " << (x&y) << endl;
	cout << x << "|" << y << " = " << (x|y) << endl;
	cout << x << "^" << y << " = " << (x^y) << endl;

	int z = 0;

	cout << "~" << z << " = " << ~z << endl;

	return 0;
}