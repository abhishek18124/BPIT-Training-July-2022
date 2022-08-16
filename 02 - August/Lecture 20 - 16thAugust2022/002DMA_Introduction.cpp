#include<iostream>

using namespace std;

int main() {

	int* xptr = new int;

	*xptr = 10;

	cout << *xptr << endl;	

	delete xptr; // this ensures we avoid memory leak

	xptr = new int;

	*xptr = 20;

	cout << *xptr << endl;

	delete xptr;

	xptr = NULL;

	cout << *xptr << endl; // avoid this

	return 0;
}