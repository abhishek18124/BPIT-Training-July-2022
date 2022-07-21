#include<iostream>

using namespace std;

void mySwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {

	int a = 0;
	int b = 1;

	mySwap(a, b);

	cout << " a = " << a << endl;
	cout << " b = " << b << endl;


	return 0;
}