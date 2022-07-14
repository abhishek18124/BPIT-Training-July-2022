#include<iostream>

using namespace std;

int x = 100;

int main() {

	cout << x << endl;

	int x = 10;

	cout << x << endl;

	cout << ::x << endl;

	::x++;

	cout << ::x << endl;

	return 0;
}