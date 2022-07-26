#include<iostream>

using namespace std;

int main() {

	char ch = 'A';

	// int* chptr; // pointer declaration
	// chptr = (int*)&ch; // pointer assignment

	// int* chptr = (int*)&ch; // pointer initialisation

	void* chptr = &ch;

	cout << "ch = " << ch << endl;
	cout << "sizeof(ch) = " << sizeof(ch) << endl;
	cout << "chptr = " << chptr << endl;
	cout << "sizeof(chptr) = " << sizeof(chptr) << "B" << endl;
	
	return 0;
}