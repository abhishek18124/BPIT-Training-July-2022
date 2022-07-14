#include<iostream>

using namespace std;

int main() {
	
	char ch; // 1B is allocated internally to store character value

	ch = 'A';

	cout << ch << endl;

	cout << (int)ch << endl; // explicit type-casting

	int X = 'B'; // implicit type-casting

	cout << X << endl;
		
	return 0;
}