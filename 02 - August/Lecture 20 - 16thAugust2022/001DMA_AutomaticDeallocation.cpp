#include<iostream>

using namespace std;

int* f() {
	// int x = 10;
	// return &x;

	int* ptr = new int;

	*ptr = 10;

	return ptr;

}

int main() {

	int* xptr = f();

	return 0;
}