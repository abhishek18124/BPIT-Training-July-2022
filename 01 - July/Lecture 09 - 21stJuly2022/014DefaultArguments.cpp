#include<iostream>

using namespace std;

int add(int a, int b = 0, int c = 0) {
	return a+b+c;
}

int main() {

	cout << add(2, 3, 4) << endl;
	cout << add(2, 3) << endl;

	return 0;
}